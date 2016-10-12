#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    while(1)
    {
        char str[55];
        gets(str);
        if(str[0]=='#')
            break;
        if(!next_permutation(str,str+strlen(str)))
        {
             puts("No Successor");
            continue;
        }
        puts(str);
    }
    return 0;
}
