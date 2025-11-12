#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int ipAddress() {
  printf("IP Address");
  system("curl ip.me");
  return 0;
}

int memInfo() {
  FILE *fptr;

  // int set unsigned integer
  unsigned long long int user ,nice ,system , idle;

  // Open the file
  fptr = fopen("/proc/stat", "r");

  // Get Details with fscan 
  fscanf(fptr, "cpu %llu %llu %llu %llu", &user, &nice , &system , &idle);

  // Free the memory 
  fclose(fptr);
  printf("user %d\n", user);
  printf("nice %d\n", nice);
  printf("system %d\n", system);
  printf("idle %d\n", idle);
  sleep(1);

  return 0;
}

int main() {
  memInfo();
  return 0;
}
