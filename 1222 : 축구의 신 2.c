#include <stdio.h>

int main()
{
	int tim, sc1, sc2, re;
	scanf("%d%d%d", &tim, &sc1, &sc2);
	re = ((90-tim)%5) ? (90-tim)/5+1 : (90-tim)/5;
	printf("%s", ((sc2-sc1) > re)? "lose" : ((sc2-sc1) < re)? "win" : "same");
	
	return 0;
}
