#include <stdio.h>

int main()
{
    int n, arr[100000], fin;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    scanf("%d", &fin);
    for(int i=0; i<n; i++)
        if(fin==arr[i]){
            printf("%d", i+1);
            return 0;
        }
    printf("-1");
    
    return 0;
}
