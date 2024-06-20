#include <stdio.h>

int main()
{
    int i, j, tmp, arr[5];
    for(i=0; i<5; i++) scanf("%d", &arr[i]);
    
    for(i=1; i<5; i++){
        tmp=arr[i];
        for(j=i-1; j>-1 && arr[j]>tmp; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=tmp;
    }
    printf("%d", arr[2]);
    
    return 0;
}
