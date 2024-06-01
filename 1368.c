#include <stdio.h>


int f(int n2)
{
    int n=n2;
    int sum=0;
    while(1){
        if(n==0) break;
        sum+=(n%10);
        n/=10;
    }   
    
    return sum;
}


int main()
{
    int n;
    scanf("%d", &n);
    
    while(1){ 
        if(n<10) break;
        n=f(n);
    }
    printf("%d", n);
    
    return 0;
}