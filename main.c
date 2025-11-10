#include <stdio.h>
#include <stdlib.h>

int ipAddress() {
  printf("IP Address");
  system("curl ip.me");
  return 0;
}

int memInfo() {
  system("head /proc/stat");
  return 0;
}

int main() {
  memInfo();
  ipAddress();
  return 0;
}
