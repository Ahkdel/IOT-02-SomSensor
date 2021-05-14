#ifndef IOT_02_WIFI_CREDENTIALS_H
#define IOT_02_WIFI_CREDENTIALS_H

#define N_WIFIS 13
#define MAX_STRING_SIZE 15

struct stWifiList {
  const char* szSSID;
  const char* szPWD;
};

/*struct*/ stWifiList stWiFi[N_WIFIS] = {
  {"convidats" , "1234567890a"},
  {"influx" , "0nderocks"},
  {"JESUITES_EDUCACIO" , "educanet00"},
  {"WIFI SIARQ","GuestsWLAN@Siarq"},
  {"Redmi Note 9S","1234567890a"},
  {"IoT-eCat" , "clotClot"},
  {"CASTELLA40_2G","1A2B3C4D5E"},
  {"MiFibra-213B","JdkZYbkx"},
  {"MiFibra-B22A" , "Z7HNgGWu"},
  {"MiFibra-2002","ypLczGj7"},
  {"Docent_pr","Pr0fe550r5_2015"},
  {"MOVISTAR_7F74","A611D8558088A529F5CC"},
  {"iotcat" , "1234567890a"}
};

#endif // IOT_02_WIFI_CREDENTIALS_H
