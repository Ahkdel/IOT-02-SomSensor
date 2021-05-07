#ifndef IOT_02_MQTT_CREDENTIALS
#define IOT_02_MQTT_CREDENTIALS

#define NODE_UNIQUE_NAME szOwnMac /* Directly embedded in the code*/

const char* mqtt_server = "10.1.1.150"; // Your MQTTS broker
const int mqtt_port = 8883; 
const char* mqtt_user = "super";
const char* mqtt_password = "0nderocks";

const char* ca_cert = \
                      "-----BEGIN CERTIFICATE-----\n" \
                      "MIIDqjCCApKgAwIBAgIJAKwjtvZmANs9MA0GCSqGSIb3DQEBDQUAMGoxFzAVBgNV\n" \
                      "BAMMDkFuIE1RVFQgYnJva2VyMRYwFAYDVQQKDA1Pd25UcmFja3Mub3JnMRQwEgYD\n" \
                      "VQQLDAtnZW5lcmF0ZS1DQTEhMB8GCSqGSIb3DQEJARYSbm9ib2R5QGV4YW1wbGUu\n" \
                      "bmV0MB4XDTE4MDgwMTE5MzExOVoXDTMyMDcyODE5MzExOVowajEXMBUGA1UEAwwO\n" \
                      "QW4gTVFUVCBicm9rZXIxFjAUBgNVBAoMDU93blRyYWNrcy5vcmcxFDASBgNVBAsM\n" \
                      "C2dlbmVyYXRlLUNBMSEwHwYJKoZIhvcNAQkBFhJub2JvZHlAZXhhbXBsZS5uZXQw\n" \
                      "ggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQCojEq3Tkuf6vUJnmpr/YVP\n" \
                      "fNaaQyFpUg97+5tXEtACi+AzFTQ/gIkGbIc5fNRCX6f66rcXmAtK3BriuKzywfM3\n" \
                      "TNLf8x2vbjbRM0ilWPJ3Q5cxASFItBbS1/VOoqKhtrlT56Nm1Xz+mO0dw4LE8ww6\n" \
                      "qBmtH31pd8DhtAYBp/jNzkp7qlot9NzAg9mytZex0S6i4b7nJDUrzbOTa7tkJyHe\n" \
                      "SptqLqotBKo7cyi2ZpCpuPD5vpYt59lEUuX9MaeffD+4zX7HhFCTCgruTyLJRQsL\n" \
                      "tPPWGPeg1ve25fp3G19dD2wxkwawPNktfHHt4P2THQfbNB7nj6BNH3hxkrQk2z3h\n" \
                      "AgMBAAGjUzBRMB0GA1UdDgQWBBS4+Mr6juV9HufTIqh4MKGnakulQTAfBgNVHSME\n" \
                      "GDAWgBS4+Mr6juV9HufTIqh4MKGnakulQTAPBgNVHRMBAf8EBTADAQH/MA0GCSqG\n" \
                      "SIb3DQEBDQUAA4IBAQAXbxaCSvnEiQgkLd0xV1tdlTiEMoG1Jk33RLqBqSSfPfgN\n" \
                      "jXQ0nJn4E2DtEnkQBgRBL08jMpujJuw3sjWhqX+0Gnw+rMrPqFl1oV/fFs6D3t+8\n" \
                      "XZm3dHpFjPcIhGL5YbjRl/waLp9Wv4qEiGZke3Y7/ksLWD+MKuS3/zFK5RBps04c\n" \
                      "T/XOacELpXLv5Ri95FTb91NIu8a1TXopbwufzDGZGDgtFv4pys96DL4J1dc0BMFp\n" \
                      "9bFclEq4aIUHw4DOhm0BSK9YA8NCF1zTv3ujr4LSHUNTlODUQaK0E6ASKnzGA1WM\n" \
                      "NLgpPXiTd2SNnM6GuHnhjJW6xo0pxSht72cQHjDf\n" \
                      "-----END CERTIFICATE-----\n";


/*
const char* mqtt_server = "iot.siarq.net"; // Your MQTTS broker
const int mqtt_port = 8883; 
const char* mqtt_user = "upc";
const char* mqtt_password = "school";

const char* ca_cert = \
"-----BEGIN CERTIFICATE-----\n" \
"MIIDtTCCAp2gAwIBAgIUdVu53YlKp/Tb9f2ZLOX1EEBCzwowDQYJKoZIhvcNAQEN\n" \
"BQAwajEXMBUGA1UEAwwOQW4gTVFUVCBicm9rZXIxFjAUBgNVBAoMDU93blRyYWNr\n" \
"cy5vcmcxFDASBgNVBAsMC2dlbmVyYXRlLUNBMSEwHwYJKoZIhvcNAQkBFhJub2Jv\n" \
"ZHlAZXhhbXBsZS5uZXQwHhcNMTgxMjIzMTkzNTAxWhcNMzIxMjE5MTkzNTAxWjBq\n" \
"MRcwFQYDVQQDDA5BbiBNUVRUIGJyb2tlcjEWMBQGA1UECgwNT3duVHJhY2tzLm9y\n" \
"ZzEUMBIGA1UECwwLZ2VuZXJhdGUtQ0ExITAfBgkqhkiG9w0BCQEWEm5vYm9keUBl\n" \
"eGFtcGxlLm5ldDCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAKd3emAE\n" \
"dmizeQM59PH5hGUeUgmA/IVq5jhwZjWZHPTcOPSMI1e5iSU2m6QYV3xfMIkv3LH0\n" \
"9DWU6cgo9wOqr6EzbTgDhsVoUUOYoDUgbaYyR3VRA6nd1BEYXF5q/YWvQbb1bRw2\n" \
"jpsxDqQPWQ5c1B7oZCgS/bAahI387h8vEGbuvPMGC5O+bJuCU8wnfJvvUU0Z1yqM\n" \
"n3HNApIrAIjvSGQLiLUzX65SHuDZ0q1P49Yw0MUswQxZNLOE5qdxSot7CSS5whVi\n" \
"gr1NcsZo/OEBht/FBxdrBiNcrC4UPOS9J8/n6RYliYc2NPiUgnp19N1F2irwa9bJ\n" \
"I4sY8zG7O4bodz8CAwEAAaNTMFEwHQYDVR0OBBYEFGcSOKfT0lO5uFJbqTKNbkvt\n" \
"9iJvMB8GA1UdIwQYMBaAFGcSOKfT0lO5uFJbqTKNbkvt9iJvMA8GA1UdEwEB/wQF\n" \
"MAMBAf8wDQYJKoZIhvcNAQENBQADggEBAFo9KIemclnw8VD9YaAxfXIOk+a1g0eK\n" \
"7nKo1x9ubhXHdbfImGg7eEe7Ab8vcu9z5YCSoSSQAKonle7MCuM8jMcdQN/G/1qU\n" \
"kE5ZGXQmKeyNS2RAja4lhMmDcMXL28RRpmarZu/woLC5QnHATuQOKCC2vgDO6uW2\n" \
"RsKGHPEn0BqcYNkIopfSwqkzi4yhwLx4H1PL+ckwhp1lv3mJQW7xZEkDW25j0aJw\n" \
"SFRr6tlwACQvykIan+a/wF0S5zUPNMy9FTsaHSp89CC2ajeS1SGjJu2iOWrymWq7\n" \
"B6dNTB+hY0PzLbJhLq/7Mud6G8czvR2SWV2mnVHmFjnhs3MxbKhIoZc=\n" \
"-----END CERTIFICATE-----\n";

*/

#endif // IOT_02_MQTT_CREDENTIALS
