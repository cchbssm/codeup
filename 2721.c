#include <stdio.h>
#include <stdbool.h>

int main()
{
    char ch[3][20];
    int com=0;
    bool re=1;
    scanf("%s%s%s", ch[0], ch[1], ch[2]);
    
    for(int i=0; i<3; i++){
        for(int j=0; j<20; j++) 
            if(ch[i][j]=='\0'){
                com=j-1;
                break;
            }
        if(i==2){
            if(ch[i][com]!=ch[0][0]){
                re--;
                break;
            }
            break;
        }
        if(ch[i][com]!=ch[i+1][0]){
            re--;
            break;
        }
    }
    
    printf("%s", (re)? "good" : "bad");
}
