#include<stdio.h>
#include<stdlib.h>

int main()
{
    int test,x,y,a,b,i;
    while(scanf("%d",&test)&&test!=0)
    {
        scanf("%d %d",&x,&y);
        while(test--)
        {
            scanf("%d %d",&a,&b);
            if(a==x||b==y) printf("divisa\n");
            else if(a>x&&b>y) printf("NE\n");
            else if(a<x&&b>y) printf("NO\n");
            else if(a>x&&b<y) printf("SE\n");
            else if(a<x&&b<y) printf("SO\n");
        }
    }

    return 0;
}
