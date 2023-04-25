#include <stdio.h>
#include <string.h>

int main(void) {
	int ntest,min,curr,max;
	char Out[3];
	scanf("%d",&ntest);
	for(int i=1;i<=ntest;i++)
	{
	    scanf("%d %d %d",&min,&max,&curr);
	    curr >= min ? (curr < max ? printf("YES") : printf("NO")) : printf("NO");
	}
	return 0;
}

