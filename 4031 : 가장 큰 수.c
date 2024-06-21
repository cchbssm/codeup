#include <stdio.h>

int main()
{
    int n, emax=0, omax=0;
    for(int i=0; i<7; i++){
        scanf("%d", &n);
        if(n%2)
            if(omax<n) omax=n;
        if(n%2==0)
            if(emax<n) emax=n;
    }
    
    for(int i=0; i<7; i++){
    }
    printf("%d", omax+emax);
    
    return 0;
}
