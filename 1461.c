#include <stdio.h>

int main()
{
    int arr[100][100]={};
    int n, ns;
    scanf("%d", &n);
    ns=n*n;
    
    for(int i=n-1; i>-1; i--)
        for(int j=0; j<n; j++, ns--) arr[i][j]=ns;
    for(int i=0; i<n; i++, puts(""))
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
}
