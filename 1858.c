#include <stdio.h>

int pas(int n, int k);

int main()
{
   int n, k;
   scanf("%d%d", &n, &k);
   printf("%d", pas(n, k));

   return 0;
}

int pas(int n, int k)
{
   if(n < 3 || k == 1 || k == n) return 1;
   return pas(n-1, k-1) + pas(n-1, k);
}