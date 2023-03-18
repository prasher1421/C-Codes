#include <iostream>
#include <cmath>

using namespace std;

class Rectangle 
{
    private:      
        int length;
        int breadth;
    public:
        void setlength(int l){            //mutator function
            if(l>=0){
                length=l;
            }
            else {
                length=1;
            }
            
        }
        void setbreadth(int b){            //mutator function   write only
            if(b>=0){
                breadth=b;
            }
            else {
                breadth=1;
            }
        }
        int getlength(){                 //accessor function
            return length;
        }
        int getbreadth(){                //accessor function      read only
            return breadth;
        }

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
    Rectangle r;
    r.setlength(10);
    r.setbreadth(5);
    cout<<"Length is "<<r.getlength()<<endl;


}