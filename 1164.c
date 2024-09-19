#include <stdio.h>

int main()
{
   int a, b, c;
   scanf("%d%d%d", &a, &b, &c);

   printf("%s", (a<=170)? "CRASH" : (b<=170)? "CRASH" : (c>170)? "PASS" : "CRASH");

   return 0;
}