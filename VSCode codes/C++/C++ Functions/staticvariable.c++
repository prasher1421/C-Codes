#include <iostream>
#include <cmath>

using namespace std;

// int v=0;
void fun()
{   
    static int v=0; //sasta global variable (cannot be accessed everywhere not visible everywhere) but remains in memory all of the time like global 
    //default value is 0
    int a=5;
    v++;
    cout<<a<<" "<<v<<endl;
}




int main()
{
    fun();
    fun();
    fun();

    return 0;
}