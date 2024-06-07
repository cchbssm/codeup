#include <stdio.h>

int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}

int mid(int a, int s, int d)
{
    int max2, min2;
    max2=(max(a, s)>max(s, d))? max(a, s) : max(s, d);
    min2=(min(a, s)<min(s, d))? min(a, s) : min(s, d);
    return (a+s+d)-max2-min2;
}

int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}
