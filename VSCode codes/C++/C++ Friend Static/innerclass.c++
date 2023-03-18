#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class outer
{
    public:
        int a=10;
        static int b;
        void fun()
        {
            i.show();
        }
        class inner // cannot access non static member
        {
            public:
                int x=25;
                void show()
                {
                    // cout<<a; non static
                    cout<<b<<" ";
                    cout<<"show";
                }
        };
        inner i; //3rd member
};
class linkedlist
{
    public:
        //useful and visible only inside outer class
        class node{//inner class
            int data;
            node *next;
        };
        node *head;
};

int main()
{
    

    return 0;
}