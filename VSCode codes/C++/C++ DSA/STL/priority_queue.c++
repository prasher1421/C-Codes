#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//default is max heap type -> ele fetched is always maximum
//regradless of the insertion order element at the top will be
//largest it will be popped or displayed by .top()

int main()
{
    priority_queue<int> maxi;

    priority_queue<int,vector<int>,greater<int>> mini; // min heap type -> ele fetched is always minimum

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    int n = maxi.size();

    for(int i = 0; i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(2);
    mini.push(1);
    mini.push(4);
    mini.push(3);
    mini.push(5);

    int m=mini.size();

    for(int i=0; i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }



    return 0;
}