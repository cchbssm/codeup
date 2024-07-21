#include <stdio.h>

int main()
{
    int n, arr[1000], tmp;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n-1; j++)
            if(arr[j] < arr[j+1]){
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
    printf("%d", arr[0]);
    
    return 0;
}
