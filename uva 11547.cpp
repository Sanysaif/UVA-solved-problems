#include<stdio.h>
#include<stdlib.h>


int main()
{
    int test;
    signed int n,result;
    scanf("%d",&test);
    while(test!=0)
    {
        scanf("%d",&n);
        result=(((((n*567)/9)+7492)*235)/47)-498;
        result=abs(result);
        result=(result%100)/10;
        printf("%d\n",result);
        test--;
    }
    return 0;
}
