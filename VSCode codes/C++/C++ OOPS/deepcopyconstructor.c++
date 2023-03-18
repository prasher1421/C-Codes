#include <iostream>
#include <cmath>

using namespace std;

class Test
{
    int a;
    int *p;
    public:
        Test(int x) //dynamic constructor as memory is being dynamically allocated inside it
        {
            a=x;
            p=new int[a];
        }
        Test(Test &t)
        {
            a=t.a;
            // p=t.p;  wrong bcz it will point on the same array of the copied one not create a new one
            p=new int[a];
            // also add for loop for copying elements of array
        }
};



int main()
{
    Test t(5);
    Test t2(t);

    return 0;
}