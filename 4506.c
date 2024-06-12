#include <stdio.h>

int gcd(int a, int b)
{
    int tmp;
    while(b){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    
    return a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d", gcd(a, b), (a*b)/gcd(a, b));
}
