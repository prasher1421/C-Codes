#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    vector<int> v={10,20,30,40,50};
    v.push_back(25);//added 25 at the last
    v.push_back(70);// added 70 at the last
    v.pop_back();//last element deleted
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int>::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
       cout<<*itr<<" ";
    }
    cout<<endl;

    set<int> s={10,20,30,40,50,60};
    // s.insert(10);
    // s.push_back(25);
    // // s.push_back(70); no pu
    // // s.pop_back();
    // for(int x:s){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // set<int>::iterator itr1;
    // for(itr1=s.begin();itr1!=s.end();itr1++)
    // {
    //    cout<<*itr<<" ";
    // }
    // cout<<endl;

    return 0;
}