#include <iostream>
#include <cmath>

using namespace std;

int g=10;
void fun()
{
    // int g=5;         
    g++;
}

int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    
    int g=20;
    {
        int g=30;
        cout<<::g<<endl;
    }
    cout<<g<<endl;
    cout<<::g<<endl;;
    return 0;
}