#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Base{//eg rectangle
    public:
    void func1();
    void func2();
    void func3();
};

class Derived : public Base{//eg cuboid
    public:
    void func4();
    void func5();
}

int main()
{
    Base *p; //pointer of base class

    p = new Derived();//base class pointer with derived class object
    p->func1();
    p->func2();
    p->func3();//only base class function can be accessed
    // p->func4();
    // p->func5();

    //we can point on cuboid and say it is a rectangle
    //we can point on a dzire and say it is car 
    //but once we say it is a car or rectangle then we dont know if it is a dzire or cuboid

    return 0;
}