#include <stdio.h>

int main()
{
    int T, A=0, B=0, C=0;
    scanf("%d", &T);
    
    if(T%10!=0){ 
        printf("-1");
        return 0;
    }
    A=T/300;
    T-=(A*300);
    B=T/60;
    T-=(B*60);
    C=T/10;
    printf("%d %d %d", A, B, C);
    
    return 0;
}