#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main()
{
    int i=0,loop=3,rule,test=1;
    float u,v,t,a,s;
    while(loop>0)
    {
        scanf("%d",&rule);
        if(rule==1)
        {
            scanf("%f %f %f",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+(.5*a)*(pow(t,2));
            printf("Case %d: %.3f %.3f\n",test++,s,a);
        }
        else if(rule==2)
        {
            scanf("%f %f %f",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+(.5*a)*(pow(t,2));
            printf("Case %d: %.3f %.3f\n",test++,s,t);
        }
        else if(rule==3)
        {
            scanf("%f %f %f",&u,&a,&s);
            v=sqrt(pow(u,2)+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",test++,v,t);
        }
        else if(rule==4)
        {
            scanf("%f %f %f",&v,&a,&s);
            u=sqrt(pow(v,2)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",test++,u,t);
        }
        else if(rule==0)
            exit(0);
    }
}
