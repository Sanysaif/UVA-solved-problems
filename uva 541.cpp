#include<iostream>
#include<cstdlib>
using namespace std;

//void calc_sum(int mat[][])

int main()
{
    int mat[100][100],row_sum[100],col_sum[100],i,j,dimension,flag1,count1,count2,chng_bit_row,chng_bit_col;
    count1=0;
    count2=0;
    while(cin>>dimension)
    {
        count1=0;
        count2=0;
        if(dimension<=0)
            exit(0);
        for(i=0; i<dimension; i++)
        {
            row_sum[i]=0;
            for(j=0; j<dimension; j++)
            {
                if(i==0)
                    col_sum[j]=0;
                cin>>mat[i][j];
                row_sum[i]+=mat[i][j];
                col_sum[j]+=mat[i][j];
            }
        }
        for(i=0; i<dimension; i++)
        {
            if(row_sum[i]%2==1)
            {
                count1++;
            }
            if(col_sum[i]%2==1)
            {
                count2++;
            }
            if(count1>1||count2>1)
            {
                cout<<"Corrupt"<<endl;
                break;
            }
        }
        if(count1==0&&count2==0)
            cout<<"OK"<<endl;
        else
        {
            if(count1==1&&count2==1)
            {
                for(i=0; i<dimension; i++)
                {
                    if(row_sum[i]%2==1)
                        chng_bit_row=i+1;
                    if(col_sum[i]%2==1)
                        chng_bit_col=i+1;
                }
                cout<<"Change bit ("<<chng_bit_row<<","<<chng_bit_col<<")"<<endl;
            }
        }
    }
    return 0;
}
