#include <stdio.h>

int main()
{
    int n, n2=1;
    scanf("%d", &n);
    for(int i=0; i<n; i++, puts(""))
        for(int j=0; j<n; j++, n2++) printf("%d ", n2);
        
    return 0;
}
