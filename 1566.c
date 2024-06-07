#include <stdio.h>

int a, n;
#include <math.h>

unsigned long long int pow(unsigned long long int x, int y)
{
    if(!n || a==1) return 1;
    for(int i=0; i<n-1; i++) x*=a;
    return x;
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", f(a, n));
}
