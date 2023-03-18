#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class parent{
    public:
        void display(){
            cout<<"Display of parent"<<endl;
        }
};

class child : public parent{
    public:
        void display(){
            cout<<"Display of child"<<endl;
        }
};

int main()

{
    child c;
    c.display();

    return 0;
}