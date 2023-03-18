#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class base   //class with pure virtual function is abstract class
{
    public:
        void fun1()
        {
            cout<<"base fun1";
        }
        virtual void fun2()=0;//atleast one pure virtual function makes abstract class
};
class derived : public base
{
    void fun2()
    {
        cout<<"derived fun2";
    }
};
int main()
{
    // base b;    base class object cannot be created 
    base *p = new derived();//base class pointer with derived class object can be called
    p->fun2();
    return 0;
}

//3 types of base class

//only with concrete functions
//purpose - reusability

// concrete + pure virtual - abstract
// purpose - reusability + polymorphism

// all pure virtual - interface + abstract
// purpose - polymorphism