#include<stdio.h>

int main()
{
    int test;
    signed long int a,b;
    scanf("%d",&test);
    while(test!=0)
    {
        scanf("%li %li",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
        test--;
    }
    return 0;
}
