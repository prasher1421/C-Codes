#include <iostream>
#include <cmath>

using namespace std;

void fun(int n)       //function calling itself again and again is recurssive 
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
        // fun(n-1);
    }
}





int main()
{
    int x=5;
    fun(x);

    return 0;
}