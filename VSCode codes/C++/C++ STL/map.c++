#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    map<int,string> m;//key value pair
    m.insert(pair<int,string>(1,"Aryan"));
    m.insert(pair<int,string>(2,"Prasher"));
    m.insert(pair<int,string>(3,"Ded"));
    
    map<int,string>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    map<int,string>::iterator itr1;
    itr1=m.find(2);
    cout<<itr1->first<<" "<<itr1->second<<endl;
    return 0;
}