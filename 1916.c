//(재귀함수) 피보나치 수열 (Large)
#include <stdio.h>

long long int che[201];
int arr[201];

long long int fib(int n)
{
   if(arr[n] == 1) return che[n];
   arr[n] = 1;
   if(n < 3) return che[n] = 1;
   return che[n] = (fib(n-2) + fib(n-1))%10009;
}

int main()
{
   int n;
   scanf("%d", &n);
   printf("%lld", fib(n));

   return 0;
}