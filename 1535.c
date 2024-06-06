#include <stdio.h>

int n, d[110];

int f()
{
    int re=1, h=d[0];
    for(int i=0; i<n; i++)
        if(h<d[i]){
            h=d[i];
            re=i+1;
        }
    return re;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
