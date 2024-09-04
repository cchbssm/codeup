//[기초-재귀함수] 재귀로 n번째 피보나치 수 리턴하기
#include <stdio.h>

int pib(int n)
{
   if(n<3) return 1;
   return pib(n-1) + pib(n-2);
}
int main()
{
   int n;
   scanf("%d", &n);
   printf("%d", pib(n));
}