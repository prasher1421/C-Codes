#include <bits/stdc++.h>
#include <deque>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//same as vector but is doubly ended queue 
//insertion from both side is possible
//deletion from both sides is possible

int main()
{
    deque<int> d={1,2,3,4,5};
    d.push_back(6);
    d.push_front(0);

    d.pop_back();
    d.pop_front();

    cout<<d.at(3)<<endl;
    cout<<d.front()<<" "<<d.back()<<endl;
    cout<<d.empty()<<endl;
    d.erase(d.end()-1,d.end());
    for(int x:d){
        cout<<x<<" ";
    }

    return 0;
}