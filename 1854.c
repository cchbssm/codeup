//[기초-재귀함수] 재귀로 각 자리 수의 합 리턴하기
#include <stdio.h>

long long int dig(long long int n)
{
   if(n == 0) return 0;
   return (n%10)+dig(n/10);
}

int main()
{
   long long int n;
   scanf("%lld", &n);
   printf("%lld", dig(n));

   return 0;
}