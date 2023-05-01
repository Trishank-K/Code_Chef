#include <stdio.h>

int main(void) {
	int t,ball,box,s;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d",&ball,&box);
	   s= box*(box+1);
	   if(ball>=s/2)
	   printf("YES\n");
	   else
	   printf("NO\n");
	}
	return 0;
}

