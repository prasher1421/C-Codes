#include <iostream>
#include <cmath>

using namespace std;
template <class T>
T sum(T a, T b , T c=0, T d= 0, T e=0)
{
    return a+b+c+d+e;
}





int main()
{
    cout<<sum(10,20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(10,20,30,40)<<endl;
    // cout<<sum("abhvddcb","jjhcxhj","jncjcj")<<endl;            error bcz default value is 0 cant be added 

    return 0;
}