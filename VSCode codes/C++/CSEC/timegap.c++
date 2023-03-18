#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int timeh,timem;
    char c;

    cin>>timeh>>c>>timem;

    int time = (24-timeh -1)*60 + (60-timem) + 570;

    cout<<time;

    return 0;
}