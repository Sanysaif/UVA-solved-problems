#include<stdio.h>
int main()
{
    int n,m[1050],i,j,moves,temp;
    while(scanf("%d",&n)==1)
    {
        moves=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&m[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=n-1; j>i; j--)
            {
                if(m[j-1]>m[j])
                {
                    temp=m[j-1];
                    m[j-1]=m[j];
                    m[j]=temp;
                    moves++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",moves);
    }

    return 0;
}
