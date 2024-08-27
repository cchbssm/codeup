#include <stdio.h>

int main()
{
   int a, b, c, d;
   scanf("%d%d%d%d", &a, &b, &c, &d);

   printf("%c", ((float)a/b > (float)c/d)? '>' : ((float)a/b < (float)c/d)? '<' : '=');

   return 0;
}