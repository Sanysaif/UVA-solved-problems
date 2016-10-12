#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int i,j,n,len,grp;
    while(cin>>grp)
    {
        string s;
        if(grp==0) exit(0);
        cin>>s;
        len=s.size();
        n=len/grp;
        for(i=0;i<grp;i++)
        {
            for(j=i*n+n-1;j>=i*n;j--)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
