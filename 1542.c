#include <stdio.h>
#include <stdbool.h>

int n;


void f(int x)
{
    bool pc=false;
    for(int i=2; i<n; i++){
        if(n%i==0){
            pc=true;
            break;
        }
    }
    printf("%s", (pc) ? "composite" : "prime");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
