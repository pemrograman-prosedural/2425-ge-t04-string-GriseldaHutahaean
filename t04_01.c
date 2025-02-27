// 12S24011 - Pedro Simangunsong 
// 12S24026 - Griselda Tabitha Nathania Hutahaean

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
   char numbs[255];

   scanf("%s", numbs);

   int length = strlen(numbs);
   for (int i = 0; i<length; i+=3)
   {
    int number = 0;
    for (int x = 0; x < 3 && (x+i) < length; x++)
    {
      number = number * 10 + (numbs[x+i]-'0');
    }
    printf("%c", number);
   }


  return 0;
}
