#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char letter[52];
    string s;
    int freq[52], i, j, max,len;
    cin.ignore();
    while(getline(cin,s))
    {

        for(i=0; i<52; i++)
            freq[i]=0;

        for(i=0; i<26; i++)
            letter[i]=65+i;
        for(i=26;i<52;i++)
            letter[i]=97-26+i;

        len=s.size();


        for(i=0; i<len; i++ )
        {
            for(j=0; j<52; j++)
            {
                if(s[i]==letter[j])
                    freq[j]++;
            }
        }
        max=-1;
        for(i=0; i<52; i++)
        {
            if(freq[i]>max)
                max=freq[i];
        }
        for(i=0; i<52; i++)
        {
            if(freq[i]==max)
                cout<<letter[i];
        }
        cout<<" "<<max<<endl;

    }
    return 0;
}
