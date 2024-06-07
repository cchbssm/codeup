#include <stdio.h>
int myswap(int *x, int *y)
{
    int tmp;
    if(*x>*y){
        tmp=*x;
        *x=*y;
        *y=tmp;
    }
}
main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}
