#include <bits/stdc++.h>
#include <stack>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    stack<string> s;//last in first out type

    s.push("Aryan");
    s.push("Prasher");
    s.push("hehe");

    cout<<s.top()<<endl;
    s.pop();//remove top ele

    cout<<s.size()<<endl;
    cout<<s.empty();

    return 0;
}