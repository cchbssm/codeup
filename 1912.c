#include <stdio.h>

void fac(int num1, int* re)
{
    if(num1==1)
        return;
    *re *= num1;
    fac(num1-1, re);
}

int main()
{
    int num1, re=1;
    scanf("%d", &num1);
    fac(num1, &re);
    printf("%d", re);
    
    return 0;
}