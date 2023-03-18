#include <bits/stdc++.h>
#include <queue>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    queue<string> q;//first in first out type

    q.push("Aryan");
    q.push("Prasher");
    q.push("hehe");

    cout<<q.front()<<endl;//first ele

    q.pop();//first ele popped 
    cout<<q.size();
    

    return 0;
}