#include <stdio.h>

int main()
{
    int n1, n2;
    char ope;
    scanf("%d%1c%d", &n1, &ope, &n2);
    
    switch(ope){
        case 42: // *
            printf("%d", n1*n2);
            break;
        case 43: // +
            printf("%d", n1+n2);
            break;
        case 45: // -
            printf("%d", n1-n2);
            break;
        case 47: // /
            printf("%.2lf", (float)n1/n2);
            break;
    }
    
    return 0;
}
