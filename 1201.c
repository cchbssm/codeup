#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   printf("%s", (n>0)? "양수" : (n<0)? "음수" : "0");

   return 0;
}