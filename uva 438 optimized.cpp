#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,x3,y1,y2,y3;
    while(scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)==6)
    {
        double circumference,radius,a,b,c,pi=3.141592653589793;
        a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
        c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        radius=(a*b*c)/sqrt((a+b+c)*(b+c-a)*(a+b-c)*(c+a-b));
        circumference=2*pi*radius;
        printf("%.2lf\n",circumference);
    }
    return 0;
}
