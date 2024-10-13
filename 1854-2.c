#include <stdio.h>

void sum(char* arr, int* res)
{
   if(!*arr) return;
   *res += (int)*arr-'0';
   sum(++arr, res);
}

int main()
{
   char arr[25];
   int res=0;
   scanf("%s", arr);
   sum(arr, &res);
   printf("%d", res);

   return 0;
}