#include <iostream>
#include <cmath>

using namespace std;

int & fun(int &a)
{
    cout<<a<<endl;
    return a;
}




int main()
{
    int x=10;
    fun(x)=25;
    cout<<x;
    

    return 0;
}