#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class car
{
    public:
        //purpose is to achieve polymorphism
        virtual void start()=0;  //pure virtual fuction
        // {
        //     cout<<"car started\n";
        // }
        virtual void stop()=0;  //forcing derived classes to override this fumction
        // {
        //     cout<<"car stopped";
        // }
};
class dzire: public car
{
    void start()
    {
        cout<<"dzire started\n";
    }
    // void stop()
    // {
    //     cout<<"dzire started\n";
    // }

};
class ded: public car
{
    void start()
    {
        cout<<"ded started\n";
    }
    void stop()
    {
        cout<<"ded started\n";
    }

};
int main()
{
    car *c=new dzire();
    c->start(); //base class pointer derived class object

    c= new ded();
    c->start();

    // dzire *c1 = new dzire();
    // c1->stop();// it is not necessary to override virtual function

    return 0;
}