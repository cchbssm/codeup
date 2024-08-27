#include <stdio.h>

int main()
{
   int nad, adv, cos;
   scanf("%d%d%d", &nad, &adv, &cos);

   printf("%s", (adv - cos > nad)? "advertise" : (adv - cos < nad)? "do not advertise" : "does not matter");

   return 0;
}