#include <stdio.h>

int main()
{
   int m1, m2, cal[6] = {0, 400, 340, 170, 100, 70};
   scanf("%d %d", &m1, &m2);

   if(cal[m1] + cal[m2] > 500) printf("angry");
   else printf("no angry");

   return 0;
}