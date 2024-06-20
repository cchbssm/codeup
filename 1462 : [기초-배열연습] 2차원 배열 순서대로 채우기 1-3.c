#include <stdio.h>

int main()
{
    int n, arr[100][100], n2=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++, n2++) arr[j][i]=n2;
    for(int i=0; i<n; i++, puts(""))
        for(int j=0; j<n; j++) printf("%d ", arr[i][j]);
            
    return 0;
}
