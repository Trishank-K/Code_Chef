#include <stdio.h>
int main(void) {
    int t,i=0,N,K;
    scanf("%d",&t);
        for(;i<t;i++)
        {
            scanf("%d %d",&N,&K);
            if(N%4==0&&K==1)
            printf("On\n");
            else if(K==1)
            printf("Ambiguous\n");
            else if(K==0)
            {
                N=N%4;
                if(N!=0)
                printf("On\n");
                else
                printf("Off\n");
            }
        }
	return 0;
}