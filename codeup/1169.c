#include <stdio.h>

int main()
{
   int age;
   scanf("%d", &age);

   if(age < 14) printf("%d 3", 13 - age);
   else printf("%d 1", 113 - age);

   return 0;
}