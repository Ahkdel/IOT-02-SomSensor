#ifndef IOT_02_WIFI_CREDENTIALS_H
#define IOT_02_WIFI_CREDENTIALS_H

#define N_WIFIS 4
#define MAX_STRING_SIZE 15

struct stWifiList {
  const char* szSSID;
  const char* szPWD;
};

stWifiList stWiFi[N_WIFIS] = {
  {"Los_Malhal", "SAFurWCM50PZ"},
  {"MOVISTAR_8676", "ge8d54BnmdmDbCE62f2m"},
  {"biblioteca","biblioteca"},
  {"influx","0nderocks"}
};

#endif // IOT_02_WIFI_CREDENTIALS_H
