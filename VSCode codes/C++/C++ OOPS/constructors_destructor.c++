#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        void setlength(int length){            
            if(length>=0){
                this->length=length;
            }
            else {
                this->length=0;
            }
            
        }
        void setbreadth(int breadth){          
            if(breadth>=0){
                this->breadth=breadth;
            }
            else {
                this->breadth=0;
            }
        }

        //CONSTRUCTOR - A special member function which allows automatic initialization of objects
        //ALWAYS PUBLIC
        //THEIR ADDRESS CANNOT BE REFERRED

        // Rectangle()  //non parameterized constructor or DEFAULT CONSTRUCTOR
        // {
        //     length=1;      //this is not needed now
        //     breadth=1;     //bcz due to default arguments second function can do same job 
        // }
        Rectangle(int a=1, int c=1)  //parameterized constructor
        {
            setlength(a);
            setbreadth(c);
        }
        Rectangle(Rectangle &rect)  // copy used another rectangle's parameter to construct another
        {
            length=rect.length;
            breadth=rect.breadth;
            // cout<<length;
        }

        virtual ~Rectangle(){ //Destructor - Last function to be executed before function class or object is destroyed
            cout<<"\nHAHA DESTRUCTED";
            //delete []p; //memory deallocated
            //f.close(); //file closed
        }
        //virtual here means in a base class pointer with derived class object
        //base desctructor will also be called after derived destructor
        //otherwise derived destructor will not be called
};

class RectDerived : public Rectangle
{
    public:
    RectDerived(){
        cout<<"Derived Created \n";
    }
    ~RectDerived(){
        cout<<"Derived Destructed\n";
    }
};

int main()
{
    Rectangle r;
    Rectangle r1();       //non parameterized
    Rectangle r2(10,5);   //parameterized
    Rectangle rr(r2);     //copy

    RectDerived rr1;
    return 0;
}