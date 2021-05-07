#include "IoT-02_wifiMng.h"
#include "IoT-02_wifiCredentials.h"

static String sDarreraWiFiConnectada = "Cap SSID";

String sDarreraSsid() {
  return sDarreraWiFiConnectada;
}

void vDelayESP(unsigned long ulMilliseconds) {
  unsigned long ulPreviousMillis = millis();
  do
  {
    yield();
  } while (millis() - ulPreviousMillis <= ulMilliseconds);
}

void vConnectToWiFi(const char *szSsid, const char *szPwd) {
  int nCmpt = 0;
  const TickType_t xDelay = 500 / portTICK_PERIOD_MS; // 0.5 seconds

  Serial.println("Connecting to WiFi network: " + String(szSsid) + ", pwd: " + String(szPwd));

  WiFi.begin(szSsid, szPwd);

  Serial.println("Waiting for WIFI connection...");
  while (WiFi.status() != WL_CONNECTED)
  {
    if (nCmpt > N_TRIES_2_RST)
    {
      ESP.restart();
      Serial.print("*");
      nCmpt = 0;
    }
    else
    {
      Serial.print(".");
    }
    nCmpt++;
    vDelayESP(500);
    //vTaskDelay( xDelay );
  }
  Serial.println();
}

boolean bIsListed(String szSSID, int *pNwO) {
  for (int i = 0; i < N_WIFIS; i++)
  {
    if (String(stWiFi[i].szSSID) == szSSID)
    {
      *pNwO = i;
      return true;
    }
  }
  return false;
}

boolean bTryWifiConnection() {
  WiFiReset();
  vDelayESP(100);
  long bestdB = -5000;
  int n = WiFi.scanNetworks(), nWhichOne, bestSSID = -1;

  if (n == 0) {
    Serial.println("\nNo networks found");
    vDelayESP(1000);
  } else {
    Serial.println("List of SSIDs and strength:");
    for (int i = 0; i < n; ++i) {
      String currentSSID = WiFi.SSID(i);
      long currentdB = WiFi.RSSI(i); //The Arduino doc is a fucking joke!
      Serial.print(currentSSID); Serial.print(":\t\t"); Serial.print(currentdB); Serial.println("dBm");
      if ((bIsListed(currentSSID, &nWhichOne)) && (currentdB > bestdB)) {
        bestSSID = nWhichOne;
        bestdB = currentdB;
        Serial.print("Best SSID: "); Serial.print(bestSSID); Serial.print("\t"); Serial.print("Best dB: "); Serial.println(bestdB);
      }
    }
    if (bestSSID != -1) {
      vConnectToWiFi(stWiFi[bestSSID].szSSID, stWiFi[bestSSID].szPWD);
      sDarreraWiFiConnectada = stWiFi[bestSSID].szSSID;
      return true;
    }
  }
  return false;
}

void WiFiReset() {
  WiFi.persistent(false);
  //WiFi.disconnect();   // Ho he hagut de treure per a evitar problemes a la reconnexió WiFi
  //WiFi.mode(WIFI_OFF); // Ho he hagut de treure per a evitar problemes a la reconnexió WiFi
  WiFi.mode(WIFI_STA);
}

void vSetupWifi() {
  do {
    //WiFiReset();
    //vDelayESP(100);
  } while (!bTryWifiConnection());
}

String szGetMac() {
  byte mac[6];
  String szMAC = "";
  char szMac[3];

  WiFi.macAddress(mac);
  //for (int i = 5; i >= 0; i--)
  for (int i = 0; i < 6; i++)
  {
    if (mac[i] > 0x0F)
      sprintf(szMac, "%2X", mac[i]);
    else
      sprintf(szMac, "0%X", mac[i]);
    szMAC += szMac;
    if (i!=5)
      szMAC += ":";
  }

  return szMAC;
}
