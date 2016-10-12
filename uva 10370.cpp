#include<stdio.h>

int main()
{
    int test,n,i,counts;
    double m[1000],average,percentage,sum;
    scanf("%d",&test);
    while(test!=0)
    {
        sum=0; counts=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lf",&m[i]);
            sum+=m[i];
        }
        average=(double)sum/(double)n;
        for(i=0;i<n;i++)
        {
            if(m[i]>average)
                counts++;
        }
        percentage=((double)counts*100)/(double)n;
        printf("%.3lf%%\n",percentage);
        test--;
    }
    return 0;
}
