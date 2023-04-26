#include <stdio.h>

int main(void) {
    int t,n,count;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d",&n);
        for (; n>0; n=n/10)
        {
            int r = n%10;
            if(r==4)
            count++;
        }
        printf("%d\n",count);
    }
    
	return 0;
}

