//(재귀 함수) 숫자 거꾸로 출력하기
#include <stdio.h>

void getdig(long long int n, long long int* dig, long long int* num)
{
   if(n < 1) return;
   *dig += 1;
   *num *= 10;
   getdig(n/10, dig, num);
}

void rev(long long int n, long long int* res, long long int cnt)
{
   if(n < 1) return;
   *res += (n%10)*cnt;
   rev(n/10, res, cnt/10);
}

int main()
{
   long long int res=0, n, dig=0, num=1;;
   scanf("%lld", &n);
   getdig(n, &dig, &num);
   rev(n, &res, num/10);
   printf("%lld", res);
}