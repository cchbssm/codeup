#include <stdio.h>

int main()
{
    int arr[7], tmp, i, j;
    for(i=0; i<7; i++) scanf("%d", &arr[i]);
    
    for(i=0; i<7; i++)
        for(j=0; j<6-i; j++)
            if(arr[j]<arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
    printf("%d\n%d", arr[0], arr[1]);
}
