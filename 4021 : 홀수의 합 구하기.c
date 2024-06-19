#include <stdio.h>

int main()
{
    int arr[7], sum=0;
    for(int i=0; i<7; i++) scanf("%d", &arr[i]);
    
    for(int i=0; i<7; i++){
        if(arr[i]%2){
            sum+=arr[i];
        }
    }
    printf("%d", (sum)? sum : -1);
}
