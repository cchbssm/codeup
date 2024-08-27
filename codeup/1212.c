#include <stdio.h>

int main()
{
   int a, b, c;
   scanf("%d%d%d", &a, &b, &c);

   if((a >= b && a >= c) && a < b + c) printf("yes");
   else if((b > a && b > c) && b < a + c) printf("yes");
   else if((c > a && c > b) && c < a + b) printf("yes");
   else printf("no");

   return 0;
}