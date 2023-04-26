#include<stdio.h>
int main(void) {
    int t,num,count;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        count = 0;
        scanf("%d",&num);
        int A[num],B[num];
        for(int j = 0;j<num;j++)
            scanf("%d",A+j);
        for(int j = 0;j<num;j++)
           scanf("%d",B+j);
        A[0]>=B[0] ? count++:0;
        for(int j = 1;j<num;j++)
        {
            A[j]-A[j-1]>=B[j]?count++:0;
        }
        printf("%d\n",count);
    }
    
	return 0;
}