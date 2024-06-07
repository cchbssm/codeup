#include <stdio.h>

long long int n;

long long int f(long long int x)
{
    long long int re=0, di=0, n2=0;
    while(x>0){
        x/=10;
        di++;
    }
    for(int i=di; i>0; i--){
        n2+=n%10;
        n/=10;
        for(int j=0; j<di-1; j++) n2*=10;
        re+=n2;
        n2=0;
        di--;
    }
    return re;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", f(n));
}
