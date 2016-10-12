#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void trngl(int amp,int freq)
{
    int j,k;
    for(j=1; j<=amp; j++)
    {
        for(k=1; k<=j; k++)
            printf("%d",j);
        printf("\n");
    }
    for(j=amp-1; j>0; j--)
    {
        for(k=1; k<=j; k++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

int main()
{
    int test,i,j,k,amp,freq,flag_test=0,flag_trngle;
    scanf("%d",&test);
    while(test--)
    {
        flag_trngle=0;
        scanf("%d %d",&amp,&freq);
        if(flag_test==0)
        {
            flag_test=1;
            for(i=0; i<freq; i++)
            {
                if(flag_trngle==0)
                {
                    flag_trngle=1;
                    trngl(amp,freq);
                }
                else
                {
                    printf("\n");
                    trngl(amp,freq);
                }
            }
        }
        else
        {
            printf("\n");
            for(i=0; i<freq; i++)
            {
                if(flag_trngle==0)
                {
                    flag_trngle=1;
                    trngl(amp,freq);
                }
                else
                {
                    printf("\n");
                    trngl(amp,freq);
                }
            }
        }
    }
    return 0;
}
