#include <bits/stdc++.h>
#include <array>
using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int basic[3]={1,2,3};
    array<int,4> a;
    array<int,4>  arr = {1,2,3,4};


    int size= arr.size();//gives the size of array
    cout<<arr.at(1)<<endl;//gives element of index 1
    cout<<a.empty()<<endl;
    cout<<a.front()<<endl;//garbage value
    cout<<arr.back()<<endl;
    cout<<arr.front();

    return 0;
}