//[기초-재귀함수] 파스칼의 삼각형 출력하기 2
#include <stdio.h>

int pas(int n, int k);

int main()
{
   int n, k;
   scanf("%d", &n);
   printf("%d", pas(n, k));

   return 0;
}

int pas(int n, int k)
{
   if(n < 3 || k == 1 || k == n) return 1;
   return pas(n-1, k-1) + pas(n-1, k);
}