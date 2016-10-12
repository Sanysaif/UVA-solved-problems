#include<stdio.h>

int main()
{
    signed int v,displacement;
    int t;
    while(scanf("%d %d",&v,&t)!=EOF)
    {
        displacement=v*2*t;
        printf("%d\n",displacement);
    }
    return 0;
}
