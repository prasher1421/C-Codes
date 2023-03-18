#include <bits/stdc++.h>
using namespace std;

class A{
    int a;
    public:
        void set_A(int a){
            this->a= a;
            cout<<"You are in class A\n";
        }
};
class AA{
    int aa;
    public:
        void set_AA(int a){
            this->aa= a;
            cout<<"You are in class AA\n";
        }
};
//Single Inheritance
class B : public A{
    int b;
    public:
        void set_B(int x){
            this->b=x;
            cout<<"You are in class B\n";
        }
};

//Multiple Inheritance
class C : public A, public AA{
    //Two classes inherited at same time
    public:
        int c;
};

//Multi level Inheritance
class D : public B{
    //Derived class acting as Base class
    public:
        int d;
};

//Hierarchial Inheritance
class E : public A{
    //More than one sub class for same base class A
    public:
        int e;
};
int main()
{
    B b;
    C c;
    D d;
    E e;//objects of derived classes created
    b.set_A(10);//member function of base class
    c.set_A(1);//member function of base class A
    c.set_AA(5);//member function of base class AA
    d.set_A(2);//member function of base class A
    d.set_B(2);//member function of derived base class B
    return 0;
}