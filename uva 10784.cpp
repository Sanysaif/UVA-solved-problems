#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double result;
    long long n,d,cases=1;
    while(scanf("%lli",&n))
    {
        if(n==0) exit(0);
        result=(3.0+sqrt(9.0+8.0*n))/2.0;
        d=result;
        if(d!=result)
            d++;
        printf("Case %lli: %lli\n",cases++,d);
    }
    return 0;
}
