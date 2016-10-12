#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    double f,result;
    while(scanf("%lf",&f)==1)
    {
        result=1.0673956817111818692592637626711*f;
        printf("%.10lf\n",result);
    }
    return 0;
}
