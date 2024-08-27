#include <stdio.h>

int main()
{
   int bir, gen, tra;
   scanf("%2d%4d%d", &bir, &tra, &gen);

   if(gen>2) printf("%d", 2013 - (bir+2000));
   else printf("%d", 2013 - (1900+bir));

   return 0;
}