#include <bits/stdc++.h>
#include <set>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//collection of element which will contain only distinct elements
//insert operation is used here

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(6);//time complexity O(n)
    s.insert(4);
    s.insert(5);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(++++s.begin());//cannot write s.begin()+1

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(4);

    cout<<*itr<<*s.find(4); 




    return 0;
}