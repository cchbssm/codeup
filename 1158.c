#include <stdio.h>

int main()
{
   int n;
   scanf("%d", &n);

   printf("%s", ((n >= 30 && n <= 40) || n >= 60 && n <= 70)? "win" : "lose");

   return 0;
}