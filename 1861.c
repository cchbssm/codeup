//[기초-재귀함수] 파스칼의 삼각형 출력하기 2
#include <stdio.h>

int pas(int n, int k)
{
   if(n < 3 || k == 1 || n == k) return 1;
   return pas(n-1, k-1) + pas(n-1, k);
}

void prtcol(int n, int k)
{
   if(n < k) return;
   printf("%d ", pas(n, k));
   prtcol(n, k+1);
}

void prt(int n, int k)
{
   if(n > k) return;
   prtcol(n, 1);
   puts("");
   prt(n+1, k);
}

int main()
{
   int n;
   scanf("%d", &n);
   prt(1, n);

   return 0;
}