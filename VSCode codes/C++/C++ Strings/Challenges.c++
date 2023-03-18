#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <ctype.h>


using namespace std;


int main()
{
    cout<< 'a'-'A'<<endl;
    string str = "fdyjashxn edgshxb ";
    for (int i=0; i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    for(int i=0; i<str.length();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    string s="khugjyfdv";

    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    // toupper(s);     only used for characters
    
    string s1="4567897654";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<< endl;


    return 0;
}













