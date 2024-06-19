#include <stdio.h>
#include <stdbool.h>

bool pri(int n)
{
    for(int i=2; i<n-1; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int i, j, n, sqr, arr[1001];
    scanf("%d", &n);
    for(i=1; i<n+1; i++) arr[i]=i;
    
    for(i=1; i*i<=n; i++) sqr=++i;
    for(i=2; i<=sqr; i++){
        if(pri(i))
            for(j=2; j<n+1; j++){
                if(arr[j]==i) continue;
                if(arr[j]%i==0) arr[j]=0;
            }
        else continue;
    }
    for(i=2; i<n+1; i++){
        if(arr[i]) printf("%d\n", arr[i]);
        else continue;
    }
}
