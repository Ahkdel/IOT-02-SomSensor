#ifndef IOT_02_MQTT_CREDENTIALS
#define IOT_02_MQTT_CREDENTIALS

#define NODE_UNIQUE_NAME szOwnMac /* Directly embedded in the code*/

const char* mqtt_server = "10.1.1.150"; // Your MQTTS broker
const int mqtt_port = 8883; 
const char* mqtt_user = "super";
const char* mqtt_password = "0nderocks";

const char* ca_cert = \
                      "-----BEGIN CERTIFICATE----- \n" \
"MIIFtTCCA52gAwIBAgIUPVNXXwev5VnSLVgpJD+oruBywTUwDQYJKoZIhvcNAQEN \n" \
"BQAwajEXMBUGA1UEAwwOQW4gTVFUVCBicm9rZXIxFjAUBgNVBAoMDU93blRyYWNr \n" \
"cy5vcmcxFDASBgNVBAsMC2dlbmVyYXRlLUNBMSEwHwYJKoZIhvcNAQkBFhJub2Jv \n" \
"ZHlAZXhhbXBsZS5uZXQwHhcNMjEwNDI3MTEwOTQ5WhcNMzIwNDI0MTEwOTQ5WjBq \n" \
"MRcwFQYDVQQDDA5BbiBNUVRUIGJyb2tlcjEWMBQGA1UECgwNT3duVHJhY2tzLm9y \n" \
"ZzEUMBIGA1UECwwLZ2VuZXJhdGUtQ0ExITAfBgkqhkiG9w0BCQEWEm5vYm9keUBl \n" \
"eGFtcGxlLm5ldDCCAiIwDQYJKoZIhvcNAQEBBQADggIPADCCAgoCggIBALxIA6wR \n" \
"mhgD72O0boM0GNHY62uqEYc8/zj4CsFIvOkfixbGrvuR8HwrrARR9A6FqYZkUrgQ \n" \
"QhLkE9wW/SAHXcqGrtZgPo+1FPCQK8WrA5oOkDmRMgqM3D6ycq+yfqd3UGxPxEtG \n" \
"bbQLB4KSQs6yKyhSudN0cVsBv9o65tjrPqpgO4eXcxxXNIynBfN9TEZpedBMkHo9 \n" \
"u6q+M3WYDAZfPNczwAlNni+Wz9se6Xn4zfHJplx/TohmcpBH81ChZ4VzCPieKCpO \n" \
"LRmOl+zseVg0fvLuZRwQ0FbR2O4R8T95CUr4feFLiLU6IDNPMpAoKnp52cpeVTde \n" \
"mycvRxpdyU2ygUKlbSsLUQletpocsN4EJW7nzyXXlkh7K4/lFHb9L2HI8llFYkO7 \n" \
"Y3jobRQOsZ0+0PXbApCZ13hzDw0ock5yDTmggDowxg4yHEuBI8BO69V6lrsPEae5 \n" \
"Uwr4YJFCQwJD4mAV2f/Dmz3GcDOjfbudHZRCgXaxxBYJwvivbxqIqAqvO/D1brUG \n" \
"EADvjdvY5hB68bk7g4kQnRU4B05Oib+AQ6cJMIDvIlPBUfzq8KqnQ7ZxE2cD4wll \n" \
"UwSGt1XnB3HRA6PkAQMXUSoMeLu4pbFqKMRn08XDSiWTYYvE/kDdEl0ehZEDsTei \n" \
"F1AkWGJkw30JXK5toLGZC1ehCQTnS+23fqpfAgMBAAGjUzBRMB0GA1UdDgQWBBRM \n" \
"bijPjRJuc80dnADLmFs4SHk9CjAfBgNVHSMEGDAWgBRMbijPjRJuc80dnADLmFs4 \n" \
"SHk9CjAPBgNVHRMBAf8EBTADAQH/MA0GCSqGSIb3DQEBDQUAA4ICAQA8UhtyW0NR \n" \
"pZ6C9IgfMIEu8vywI5GHkMN8JeIML01nKz9OTmy2o6uUP5iDbskxTi2O3s9QWpWz \n" \
"x43Go1DEi71DNOjbNkJvLljH4OVtpJuzF8qcaY2t0EquPKiMHgDxgNgy3RZ16UZQ \n" \
"NaUk49DG+8s7rehnKv3MoGoK0eVl7VulJnRHCeqDHp2L8gu67Ae1trndLjPJ5NAE \n" \
"YigUyZdfMbJcAKGSnMTva3oH1tIpT68hL9UNgSqdSuMszvw+G1QpofV2nVjHU9p0 \n" \
"gsA+Fo/CQlhqU3itD7Zil6Eb+Xy2a77bn4YkgLlYoq63p6eX7/F22AJ/fgL9fz0g \n" \
"Ey1NHVlja2p6uxNA9jSfaQkgG7rW2fHTrhpE8dcLgl7sSNArwh4t3DSxWqXZXxNd \n" \
"yFigAVpVsusVaGF10AXWEfY7G3Vdp0pcmREePKj2ISyGMKtLlECc1Tn3cLVOAN64 \n" \
"oktpvVjgj59v551pdclukmuZMvk+yUngH3UZM5qzqtE2P8N9h5y499PUXiiciygv \n" \
"5nKLVjO/k0ZwxEr7Ho/vUBUfrg7PFNn+xP51TIBcZXirR1Px0Cs7673w774saFoc \n" \
"YSLnUeolMscfHqceGXTJpPMY/cviZQX1Awsk54cBgQE8K/G2DV7oRzeJOJIXwjYJ \n" \
"AA3AhaqhHdKfe47tlXAwBCb5ECxe7MMvxQ== \n" \
"-----END CERTIFICATE----- \n";


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
