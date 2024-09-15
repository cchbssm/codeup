//[기초-재귀함수] 재귀로 n번째 피보나치 수 출력하기
#include <stdio.h>

long long int che[101];
int arr[101];

long long int fib(int n)
{
   if(arr[n] == 1) return che[n];
   arr[n] = 1;
   if(n < 3) return che[n] = 1;
   return che[n] = (fib(n-2) + fib(n-1))%1000000007;
}

int main()
{
   int n;
   scanf("%d", &n);
   printf("%lld", fib(n));

   return 0;
}