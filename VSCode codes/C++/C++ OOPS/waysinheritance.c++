#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class parent{
    private: int a;
    protected: int b;
    public: int c;

    void funparent(){
        a=10;
        b=5;
        c=15;
    }
};

class child: private parent{
    void funchild(){
        // a=10;
        b=5;
        c=15;
    }
};

class grandchild: public child{
    void fungrandchild(){
        // a=10;
        // b=5;
        // c=15;
    }
};

int main()
{
    // child t;
    // t.a=10;
    // t.b=5;
    // t.c=15;

    return 0;
}