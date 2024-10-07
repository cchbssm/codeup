//[기초-재귀함수] 서로 다른 n개 중에서 r개 순서없이 고르기
#include <stdio.h>

int cho(int n, int r)
{
   if(r == 1) return n;
   if(r == n) return 1;
   if(r > n) return 0;
   return cho(n-1, r-1) + cho(n-1, r);
}

int main()
{
   int n, r;
   scanf("%d%d", &n, &r);
   printf("%d", cho(n, r));
}