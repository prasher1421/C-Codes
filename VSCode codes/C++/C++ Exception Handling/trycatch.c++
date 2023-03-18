#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

int division(int x,int y)
{
    if(y==0)
    {
        throw 404;
    }
    return x/y;

}

int main()
{
    int a=10,b=0,c;
    try//if error here then move to catch directly without checking whole 
    {
        // if(b==0)//exceptional case or simply error
        // {
        //     throw 404;
        // }
        // c=a/b;
        
        c = division(a,b); //doing division by function
        cout<<c;
    }
    catch(int e)//1 threw is caught here
    {
        cout<<"Division by zero "<<e<<endl;
    }

    return 0;
}