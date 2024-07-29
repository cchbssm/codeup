#include <stdio.h>

int main()
{
    int K, arr[100000], re=0, i, j;
    scanf("%d", &K);
    for(i=0; i<K; i++) scanf("%d", &arr[i]);
    
    for(i=1; i<K; i++){
        if(arr[i] == 0){
            j=i-1;
            while(1){
                if(arr[j] != 0) break;
                j--;
            }
            arr[j] = 0;
        }
    }
    puts("");
    for(i=0; i<K; i++){ 
        re+=arr[i];
        printf("%d ", arr[i]);
    }
    puts("");
    printf("%d", re);
    
    return 0;
}
