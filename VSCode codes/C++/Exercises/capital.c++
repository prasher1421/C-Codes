#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    string s;
    getline(cin,s);
    int spaces=0;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.length();i++)
    {
        s[0]=s[0]-32;
        if(s[i]==' ')
        {
            spaces++;
            if(i!=0)
            {
                s[i+spaces+1]-=32;
            }
        }

    }
    cout<<s<<endl;

    return 0;
}