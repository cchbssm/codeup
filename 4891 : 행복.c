#include <stdio.h>

int main()
{
    int n, max=0, min=1000, ach;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &ach);
        if(ach<min) min=ach;
        if(ach>max) max=ach;
    }
    printf("%d", max-min);
    
    return 0;
}
