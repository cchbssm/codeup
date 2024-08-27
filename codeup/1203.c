#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   printf("%s", (n<=10)? "정상" : (n<=20)? "과체중" : "비만");

   return 0;
}