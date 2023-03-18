#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class base {
    public:
        base(){
            cout<<"Default of base"<<endl;
        }
        base(int x){
            cout<<"Parmeterized base "<<x<<endl;
        }
};
class derived : public base{
    public:
        derived(){
            cout<<"Default of derived"<<endl;
        }
        derived(int a)
        {
            cout<<"Parameterized default "<<a<<endl;
        }
        derived(int x, int a):base(x){
            cout<<"Parameterized default "<<a<<endl;
        }
};





int main()
{
    // derived d;
    // derived d1(10);
    derived d2(10,11);
    return 0;
}