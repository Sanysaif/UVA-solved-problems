//wrong answer on uva

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test!=0)
    {
        int i=0,max_val=0,counts=0;
        string s;
        char max_key[26];
        map<char,int> alphabets;
        alphabets['a'];
        alphabets['b'];
        alphabets['c'];
        alphabets['d'];
        alphabets['e'];
        alphabets['f'];
        alphabets['g'];
        alphabets['h'];
        alphabets['i'];
        alphabets['j'];
        alphabets['k'];
        alphabets['l'];
        alphabets['m'];
        alphabets['n'];
        alphabets['o'];
        alphabets['p'];
        alphabets['q'];
        alphabets['r'];
        alphabets['s'];
        alphabets['t'];
        alphabets['u'];
        alphabets['v'];
        alphabets['w'];
        alphabets['x'];
        alphabets['y'];
        alphabets['z'];
        cin.ignore();
        getline(cin,s);
        for(int i = 0; i<s.size(); i++)
        {
            s[i] = tolower(s[i]);
            if(s[i]>='a'&&s[i]<='z')
            {
                alphabets[s[i]]+=1;
                if(alphabets[s[i]]>max_val)
                    max_val=alphabets[s[i]];
            }
        }
        map<char,int>::iterator it=alphabets.begin();

        while(it!=alphabets.end())
        {

            if(it->second==max_val)
            {
                cout<<it->first;
            }
            it++;
        }
        cout<<endl;
        test--;
    }
    return 0;
}
