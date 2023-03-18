#include <bits/stdc++.h>
#include <map>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    map <int,string> m;

    m[3]="hehe";
    m[1]="Aryan";
    m[2]="Prasher";

    m.insert({5,"Yeaa"});

    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<endl; //first -> keys second -> values
    }//we will get output in sorted order of keys...


    auto it =m.find(5);
    cout<<(*it).second<<endl;//method to use find in maps


    m.erase(5);
    cout<<m.count(5)<<endl;
    cout<<(m[1]=="Aryan");//It works and gives 1 output

    return 0;
}
//there is a multimap too
//here keys can be repeated but same key value pair cannot be