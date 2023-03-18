#include <iostream>
#include <cmath>
#include <string>
#include <ctype.h>

using namespace std;


int main()
{
    string s="sdfgthjnmbvcxdfrftyghjb";

    int count[26];

    for(int i=0; i<26;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        count[s[i]-'a']++;
    }

    char ans='a';
    int maxCount=0;

    for(int i=0;i<26;i++)
    {
        if(count[i]>maxCount)
        {
            maxCount=count[i];
            ans=i+'a';
        }
    }
    cout<<maxCount<<" "<<ans<<endl;    

    return 0;
}