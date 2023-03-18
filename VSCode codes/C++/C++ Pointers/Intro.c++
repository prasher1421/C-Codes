#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int x=10;
    int *p=&x;                       //declaration

    cout<<x<<endl;                    //value
    cout<<&x<<endl;                   //path of x
    cout<<p<<endl;                    //path of x
    cout<<&p<<endl;                   //path of pointer p
    cout<<*p<<endl;                  //dereferencing deference derefrence 


    int **c =&p;                            // pointer to pointer
    cout<<&p<<endl;                     // address of pointer
    cout<<c<<endl;                    // address to pointer
    cout<<*c<<endl;                        // value of p== &x
    cout<<**c<<endl;                        //value at *p == x  





    int A[5]={1,2,3,4,5};
    int *pt;
    pt = new int[5];
    
    A[2]=15;
    pt[2]=15;

    delete []pt;
    pt=nullptr;











    return 0;
}