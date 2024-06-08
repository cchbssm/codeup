#include <stdio.h>

void subs(char *p, int x, int y)
{
    for(int i=x; i<x+y; i++){
        printf("%c", *(p+i));
    }
}

int main()
{
    char arr[100];
    int s, f;
    scanf("%s%d%d", arr, &s, &f);
    subs(arr, s, f);
    
}
