#include <stdio.h>

int main()
{
    int n, n2=1, arr[100][100];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++, n2++) arr[i][j]=n2;
        i++;
        for(int j=n-1; j>-1; j--, n2++) arr[i][j]=n2;
    }
    
    for(int i=0; i<n; i++, puts(""))
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
        
    return 0;
}
