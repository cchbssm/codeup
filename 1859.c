#include <stdio.h>

void tri1(int m);
void tri2(int m);

int n;

int main()
{
   scanf("%d", &n);
   tri1(1);

   return 0;
}

void tri1(int m)
{
   tri2(n-m+1);
   puts("");
   if(n == 1) return;
   n--;
   tri1(++m);
}

void tri2(int m)
{
   printf("*");
   if(m == n) return;
   tri2(m+1);
}