//[기초-재귀함수] 계단 뛰어 오르기
#include <stdio.h>

int sta(int n)
{
   if(n == 1) return 1;
   if(n == 2) return 2;
   if(n == 3) return 4;
   return sta(n-1) + sta(n-2) + sta(n-3);
}

int main()
{
   int n;
   scanf("%d", &n);
   printf("%d", sta(n));
}