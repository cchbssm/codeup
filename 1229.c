//비만도 측정 2
#include <stdio.h>

int main()
{
   double h, w, res=0, wai=0;
   scanf("%lf%lf", &h, &w);

   if(h<150) wai = (h - 100);
   else if(h<160) wai = (h - 150) / 2 + 50;
   else wai = (h - 100)*0.9;
   res = (w - wai) * 100 / wai;

   //printf("%s", (res<11)? "정상" : (res>10 && res<21)? "과체중" : "비만");
   if(res<=10) printf("정상");
   else if(res<=20) puts("과체중");
   else puts("비만");

   return 0;
}