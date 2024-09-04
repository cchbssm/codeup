//[기초-재귀함수] 재귀로 각 자리 수의 합 리턴하기
#include <stdio.h>

int res=0;

void dig(long long int n);

int main()
{
   long long int n;
   scanf("%lld", &n);
   dig(n);
   printf("%d", res);
}

void dig(long long int n)
{
   if(n<1) return;
   res += n % 10;
   n /= 10;
   dig(n);
}