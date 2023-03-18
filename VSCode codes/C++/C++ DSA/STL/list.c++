#include <bits/stdc++.h>
#include <list>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//it is a doubly linked list
//it is possible to push_back and push_front here same for pop
//front() and back() give the first and last elements of list

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);

    // l.pop_back();
    // l.pop_front();
    l.erase(l.begin());//erase complexity O(n)
    list<int> ne(l);
    list<int> n(5,100);

    for(int i:n){
        cout<<i<<" ";
    }


    return 0;
}