#include <stdio.h>
#include <stdbool.h>

bool pri(int n)//n의 배수를 제거할지 결정
{
    for(int i=2; i<n-1; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int i, j, n, sqr, arr[10001];
    scanf("%d", &n);
    for(i=1; i<n+1; i++) arr[i]=i;
    
    for(i=1; i*i<=n; i++) sqr=++i;//제곱근 유사값 구해 제거할 수 최대값 구함
    for(i=2; i<=sqr; i++){
        if(pri(i))
            for(j=2; j<n+1; j++){
                if(arr[j]==i) continue;//숫자 본인 제외
                if(arr[j]%i==0) arr[j]=0;//합성수 제거
            }
        else continue;
    }
    for(i=2; i<n+1; i++){
        if(arr[i]) printf("%d\n", arr[i]);//제거된 수 건너뜀
        else continue;
    }
}
