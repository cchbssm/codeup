#include <stdio.h>

int main()
{
    int arr[9];
    for(int i=0; i<9; i++) scanf("%d", &arr[i]);
    int max[2]={arr[0], 0};
    
    for(int i=1; i<9; i++)
        if(max[0]<arr[i]){
            max[0]=arr[i];
            max[1]=i;
        }
    printf("%d\n%d", max[0], max[1]+1);
}
