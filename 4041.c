#include <stdio.h>

int main(){
    int n, nd, di=0, sum=0, c;
    scanf("%d", &n);
    nd=n;
    while(nd>0){
        nd/=10;
        di++;
    }
    int arr[di];
    for(int i=0; i<di; i++){
        arr[i]=n%10;
        n/=10;
    }
    for(int i=0; i<di; i++) 
        if(arr[i]!=0){
            c=i;
            break;
        }
    for(int i=0; i<di; i++){
        sum+=arr[i];
        if(i<c) continue;
        printf("%d", arr[i]);
    }
    puts("");
    printf("%d", sum);
}