#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int perimeter();
        int area(){
            return length*breadth;
        }

            void setlength(int l){            
            if(l>=0){
                length=l;
            }
            else {
                length=0;
            }
            
        }
        void setbreadth(int b){          
            if(b>=0){
                breadth=b;
            }
            else {
                breadth=0;
            }
        }

        Rectangle(int a=1, int c=1)  //parameterized constructor
        {
            setlength(a);
            setbreadth(c);
        }
        Rectangle(Rectangle &rect)  // copy used another rectangle's parameter to construct another
        {
            length=rect.length;
            breadth=rect.breadth;
        }

};

int Rectangle::perimeter()             //second method for declaring
{
    return 2*(length + breadth);
}






int main()
{
    Rectangle r(10,5);
    cout<<r.area();
    cout<<r.perimeter();
}