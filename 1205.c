#include <stdio.h>

int main()
{
   int a, b;
   scanf("%d%d", &a, &b);
   float ari[7] = {a-b, b-a, a*b, a/b, b/a, a, b};
   float max = a+b;
   for(int i=1; i<b; i++) ari[5] *= a;
   for(int i=1; i<a; i++) ari[6] *= b;
   
   for(int i = 0; i<7; i++){
      if(ari[i] > max){
         max = ari[i];
      }
   }
   printf("%.06f", max);

   return 0;
}