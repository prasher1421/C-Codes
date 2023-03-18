#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class test
{
    private:
        int a;
        int b;
    public:
        static int count;// visible only to class but has lifetime till end of program (remains in memory) defaultt value = 0
        test()
        {
            a=10;
            b=10;
            count++;
        }
        static int getcount()  //static func can only access static variables not others
        {
            // a++;
            return count;
        }
};
int test::count=0;
class innova
{
    public:
        static int price;

        static int getprice()
        {
            return price;
        }
};
int innova::price=12;

int main()
{
    // test t2;
    cout<<test::getcount()<<endl;
    test t1;
    cout<<t1.getcount()<<endl;
    cout<<innova::getprice()<<endl;
    return 0;

}