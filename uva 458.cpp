#include<iostream>

using namespace std;

int main()
{
    string s;
    int i;
    while(cin>>s)
    {
        for(i=0; i<s.size(); i++)
        {
            cout<<(char)((int)s[i]-7);
        }
        cout<<endl;
    }
}
