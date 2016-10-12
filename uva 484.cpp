#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>

using namespace std;
int main()
{
    long long n,i,k;
    vector<long long>numbers;
    map<long long, long long>counts;
    map<long long, long long>flag;
    numbers.clear();
    counts.clear();
    flag.clear();
    while(cin>>n)
    {
        if(flag[n]!=1)
        {
            flag[n]=1;
            numbers.push_back(n);
            counts[n]++;
        }
        else  counts[n]++;
    }
    k=numbers.size();
    for(i=0; i<k; i++)
    {
        cout<<numbers[i]<<" "<<counts[numbers[i]]<<endl;
    }
    return 0;
}
