#include<iostream>
#include<cstring>
#include<cstdlib>
#include<math.h>
using namespace std;

int main()
{
    int test,i,cases=1;
    long long income,final_tax;
    double tax,block;
    cin>>test;
    while(test--)
    {
        cin>>income;
        tax=0;
        block=income-180000;
        if(block<=0)
        {
            cout<<"Case "<<cases++<<": "<<0<<endl;
        }
        else
        {
            if(block<=300000)
            {
                tax=block*0.10;
                if(tax<2000)
                    tax=2000;
                final_tax=ceil(tax);
                cout<<"Case "<<cases++<<": "<<final_tax<<endl;
            }
            else
            {
                block=block-300000;
                tax+=300000*0.10;
                if(block<=400000)
                {
                    tax+=block*0.15;
                    final_tax=ceil(tax);
                    cout<<"Case "<<cases++<<": "<<final_tax<<endl;
                }
                else
                {
                    block=block-400000;
                    tax+=400000*0.15;
                    if(block<=300000)
                    {
                        tax+=block*0.20;
                        final_tax=ceil(tax);
                        cout<<"Case "<<cases++<<": "<<final_tax<<endl;
                    }
                    else
                    {
                        block=block - 300000;
                        tax+=300000*0.20;
                        tax+=block*0.25;
                        final_tax=ceil(tax);
                        cout<<"Case "<<cases++<<": "<<final_tax<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
