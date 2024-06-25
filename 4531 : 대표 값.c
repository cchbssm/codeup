#include <stdio.h>

int main()
{
    int avg=0, tmp, arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        avg+=arr[i];
    }
    
    for(int i=0; i<5; i++)
        for(int j=0; j<4; j++)
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
    printf("%d\n%d", avg/5, arr[2]);
    
    return 0;
}
