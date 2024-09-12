//[기초-재귀함수] 수 삼각형 출력하기
#include <stdio.h>

void tri(int m);
void tri2(int m, int m2);

int n;

int main()
{
   scanf("%d", &n);
   tri(1);
}

void tri(int m)
{
   if(n+1 == m) return;
   tri2(1, m);
   puts("");
   tri(m+1);
}

void tri2(int m, int m2)
{
   printf("%d ", m);
   if(m == m2) return;
   tri2(m+1, m2);
}