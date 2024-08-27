#include <stdio.h>

int main()
{
   int sta, bon, res, arr[46]={}, lis[6];
   for(int i=0; i<6; i++){
      scanf("%d", &sta);
      arr[sta] = 1;
   }
   scanf("%d", &bon);
   for(int i=0; i<6; i++){
      scanf("%d", &sta);
      lis[i]=sta;
      if(arr[sta]) res++;
   }
   for(int i=0; i<6; i++){
      if(bon == lis[i]){
         bon=1;
         break;
      }
   }
   if(bon != 1) bon = 0;

   if(res<3) printf("0");
   if(res==3) printf("5");
   if(res==4) printf("4");
   if(res==5) printf("3");
   if(res==5 && bon) printf("2");
   if(res==6 && bon) printf("1");

   return 0;
}