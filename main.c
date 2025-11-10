#include <stdio.h>
#include <stdlib.h>

int ipAddress() {
  printf("IP Address");
  system("curl ip.me");
  return 0;
}

int memInfo() {

  FILE *fptr;
  fptr = fopen("/proc/stat", "r");
  char myString[100];
  fgets(myString, 100, fptr);
  printf("%s", myString);
  fclose(fptr);
  return 0;
}

int main() {
  memInfo();
  return 0;
}
