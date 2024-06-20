#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++, puts("")){
        for(int j=0; j<n; j++) printf("%d ", 1+(n*i)+j);
        i++;
        if(i>=n) break;
        puts("");
        for(int j=0; j<n; j++) printf("%d ", n*(i+1)-j);
    }
    
    return 0;
}
