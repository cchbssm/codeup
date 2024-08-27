#include <stdio.h>

int main()
{
   int a, sum=0;
   for(int i=0; i<4; i++){
      scanf("%d", &a);
      sum += a;
   }
   printf("%s", (sum == 1)? "도" : (sum == 2)? "개" : (sum == 3)? "걸" : (sum == 4)? "윷" : "모");

   return 0;
}