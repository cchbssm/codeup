#include <stdio.h>

int main()
{
    int in[4], out[4], sum=0, max=0;
    for(int i=0; i<4; i++){
        scanf("%d %d", &out[i], &in[i]);
    }
    for(int i=0; i<4; i++){
        sum+=in[i]-out[i];
        if(max<sum) max=sum;
    }
    printf("%d", max);
    
    return 0;
}
