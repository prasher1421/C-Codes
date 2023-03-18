#include <iostream>
#include <cmath>

using namespace std;//cout and cin are present in this namespace

#define pi (3.14159)
#define sq(a) a*a

//declarative region that provides a scope to identifiers
namespace   first
{
    void fun()
    {
        cout<<"first"<<endl;
    }
}

namespace second
{
    void fun()
    {
        cout<<"second"<<endl;
    }
}
using namespace first;
int main()
{
    fun();    
    second::fun();
    return 0;
}