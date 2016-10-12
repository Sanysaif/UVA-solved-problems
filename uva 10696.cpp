#include<stdio.h>
#include<stdlib.h>

int f91(int N)
{
    int result;
    if(N>=101)
    {
        result=N-10;
    }
    if(N<=100)
    {
        result=f91(f91(N+11));
    }
    return result;

}

int main()
{
    int N,result;
    while(1)
    {
        scanf("%d",&N);
        if(N==0) exit(0);
        printf("f91(%d) = %d\n",N,f91(N));
    }
    return 0;
}
