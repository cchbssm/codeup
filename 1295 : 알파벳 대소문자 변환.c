#include <stdio.h>
#include <ctype.h>

int main()
{
    char c[1001];
    scanf("%s", c);
    for(int i=0; c[i] != '\0'; i++){
        if(isupper(c[i])) c[i] = tolower(c[i]);
        else c[i] = toupper(c[i]);
    }
    printf("%s", c);
    
    return 0;
}
