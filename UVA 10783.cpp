#include<stdio.h>

int main()
{
    int t,a,i,j,k,b,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&a);
        scanf("%d",&b);
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)
            a=a+1;
        if(b%2==0)
            b=b-1;
        j=(b-a)/2+1;
        sum=(j*(2*a+2*(j-1)))/2;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
