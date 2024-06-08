#include <stdio.h>

void f(double x)
{
    if(x-(int)x==0){
        if(x<0) printf("%d", (int)-x);
        else printf("%d", (int)x);
    }
    else{
        if(x<0) printf("%g", -x);
        else printf("%g", x);
    }
}

int main()
{
    double n;
    scanf("%lf", &n);
    f(n);
}
