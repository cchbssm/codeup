#include <stdio.h>

int main()
{
    int n[3], tmp;
    for(int i=0; i<3; i++) scanf("%d", &n[i]);
    
    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
            if(n[j] > n[j+1]){
                tmp=n[j];
                n[j]=n[j+1];
                n[j+1]=tmp;
            }
    printf("%d", n[1]);
    
    return 0;
}
