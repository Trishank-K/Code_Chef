#include <stdio.h>

int main(void) {
	int x,y,n;
	scanf("%d",&n);
	for(int i =1;i<=n;i++)
	{
	    scanf("%d %d",&x,&y);
	    if((x+y)>6)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

