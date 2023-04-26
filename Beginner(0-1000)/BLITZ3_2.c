#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,N,A,B,dur;
    scanf("%d",&t);
    for(int i =0;i<t;i++)
    {
        scanf("%d %d %d",&N,&A,&B);
        dur = ((180+(((N+1)/2)*2)-A)) + (180+((N/2)*2)-B);
        printf("%d\n",dur);
    }
    return 0;
}
