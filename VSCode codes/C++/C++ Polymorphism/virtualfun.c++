#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class base{
    public:
        virtual void fun(){         //function is virtual hence not called 
            cout<<"fun of base"<<endl;
        }
};

class derived : public base{
    public:
        void fun(){//virtual funnction overrided
            cout<<"fun of derived"<<endl;
        }
};

int main()
{
    base *p =new derived();
    p->fun();
    //derived class function will be called
    //if function wasnt virtual base class function would be called

    return 0;
}