#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double i,n,sum;
    while(cin>>n)
    {
        sum=0;
        sum=(n*n*(n+1)*(n+1))/4;
        cout<<sum<<endl;
    }
    return 0;
}
