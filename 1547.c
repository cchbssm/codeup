#include <stdio.h>

int n;
#include <stdbool.h>
bool prime(int x)
{
    if(x==2) return true;
    for(int i=2; i<x; i++){
        if(x%i==0){
            return false;  
        } 
    }
        
    return true;
}

int main()
{
  scanf("%d", &n);
  if(prime(n)) printf("prime");
  else printf("composite");
  return 0;
}
