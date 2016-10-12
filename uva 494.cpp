#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    string s;
    int i,j,counts,flag=0;
    while(getline(cin,s))
    {
        counts=0;
        if(s.empty()) exit(0);
        for(i=0; i<s.size(); i++)
        {

            if(s[i]==NULL)
            {
                break;
            }
            if(flag==0)
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                {
                    flag=1;
                    counts++;
                }
                else
                    continue;
            }
            else
            {
                if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
                {
                    continue;
                }
                else
                {
                    flag=0;
                }
            }
        }
        cout<<counts<<endl;
        flag=0;
    }
    return 0;
}
