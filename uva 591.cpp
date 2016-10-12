#include<stdio.h>
#include<stdlib.h>

int main()
{
    int set=1,n,h[100],i=0,moves,sum,wall_height;
    while(scanf("%d",&n))
    {
        moves=0;sum=0;
        if(n==0) exit(0);
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        wall_height=sum/n;
        for(i=0;i<n;i++)
        {
            if(h[i]>wall_height)
                moves+=h[i]-wall_height;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,moves);
        set++;
    }

    return 0;
}
