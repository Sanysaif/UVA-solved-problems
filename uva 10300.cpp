#include<iostream>

using namespace std;

int main()
{
    int i=0,test=0,farmers=0,space=0,animals=0,premium=0,total;
    cin>>test;
    while(test!=0)
    {
        total=0;
        cin>>farmers;
        for(i=0;i<farmers;i++)
        {
            cin>>space>>animals>>premium;
            total+=(space*premium);

        }
        cout<<total<<endl;

        test--;
    }
    return 0;
}
