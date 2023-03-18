#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class test
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    friend void fun();// can be a global function  can be a member of other class
};

class your;
class my
{
    private:
        int a=10;
    friend your; // now your can access any private protected member of my
};

class your{
    public:
        my m;
        void fun()
        {
            cout<<m.a;
        }
};

void fun(){ // definition of function (friend)
    test t;
    t.a=15;
    t.b=10;
    t.c=5;
}

int main()
{
    

    return 0;
}