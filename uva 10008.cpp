#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
#include<ctype.h>
#include<algorithm>
using namespace std;
int main()
{
    int test,len,i,j,counts[26],temp;
    char c[1000],word[26];
    for(i=0; i<26; i++) counts[i]=0;
    for(i=0; i<26; i++) word[i]=i+'A';
    scanf("%d",&test);
    getchar();
    while(test!=0)
    {
        gets(c);
        len=strlen(c);
        for(i=0; i<len; i++)
        {
            if(c[i]>='A'&&c[i]<='Z'||c[i]>='a'&&c[i]<='z')
            {
                c[i]=toupper(c[i]);
                if(c[i]>='A'&&c[i]<='Z')
                    counts[c[i]-65]++;
            }
        }
        test--;
    }
    for(i=0; i<25; i++)
    {
        for(j=i+1; j<25; j++)
        {
            if(counts[i]<counts[j])
            {
                swap(counts[i],counts[j]);
                swap(word[i],word[j]);
            }
            if(counts[i]==counts[j])
            {
                if(word[i]>word[j])
                    swap(word[i],word[j]);
            }
        }
    }
    for(i=0;counts[i]>0;i++)
        printf("%c %d\n",word[i],counts[i]);
    return 0;
}
