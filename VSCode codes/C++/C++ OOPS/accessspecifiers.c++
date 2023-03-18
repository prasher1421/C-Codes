#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//access restriction can be implied using certain keywords

class base{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    void funbase(){
        a=10;
        b=20;
        c=30;
    }

};
class derived :public base
{
    public:
        funderived(){
            // a=1; private so cannot be accessed in child class
            b=2;//protected can be accessed in derived class
            c=3;
        }
};

int main()
{
    base x;
    // x.a=15;
    // x.b=30; private and protected members are inaccessible outside class
    x.c=90;
    

    return 0;
}