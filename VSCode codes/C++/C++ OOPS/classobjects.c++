#include <iostream>
#include <cmath>

using namespace std;

//user defined data type containing its own data members and member functions 
class Rectangle // a way to bind data and functions together
{
    public:      //if not written length and breadth will become private
        int length;
        int breadth;

        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }
};



int main()
{
   Rectangle r1,r2;// objects are instances of classes . To use the data and access the functions we need to create objects 

   r1.length=10;
   r1.breadth=5; 
   cout<<r1.area()<<endl;

   r2.length=15;
   r2.breadth=10;
   cout<<r2.area()<<endl;



    Rectangle r;
    Rectangle *p;
    p=&r;
    r.length=10;   //for object '.' is used
    p->length=11;  //for pointer to object caps
    p->breadth=5;
    cout<<p->area()<<endl;



    Rectangle *pt;
    pt=new Rectangle;
    Rectangle *q =new Rectangle();  // created in heap
    pt->length=15;
    pt->breadth=10;
    cout<<pt->area()<<endl;



    return 0;
}