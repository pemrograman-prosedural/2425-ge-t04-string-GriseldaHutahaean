// 12S24011 - Pedro Simangunsong 
// 12S24026 - Griselda Tabitha Nathania Hutahaean

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
  char string [21];
  scanf("%20[^\n]", string);
  int length = strlen(string);
  for (int i = 0; i < length; i++) {
  printf ("%03d", string[i]);
  }

printf("013\n");
  
  return 0;
}
