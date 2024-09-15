//(재귀 함수) n의 k승 구하기
#include <stdio.h>

void f(long long int* p, int n, int k)
{
   if(n == -1 || k < 2 || n == 1) return;
   *p *= n;
   f(p, n, k-1);
}

int main()
{
   long long int n;
   int k;
   scanf("%lld%d", &n, &k);
   f(&n, n, k);
   if(!k || (n == -1 && k%2 == 0)){
      printf("1");
      return 0;
   }
   printf("%lld", n);

   return 0;
}