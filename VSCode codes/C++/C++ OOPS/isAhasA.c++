#include <iostream>
#include <cmath>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int getlength(){
            return length;
        }
        int getbreadth(){
            return  breadth;
        }
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
        Rectangle(int a=1, int c=1)  
        {
            setlength(a);
            setbreadth(c);
        }
        Rectangle(Rectangle &rect) 
        {
            length=rect.length;
            breadth=rect.breadth;
        }
};

class Cuboid : public Rectangle      //cuboid """is""" a rectangle
{
    private:
        int height;
    public:
        void setheight(int height){          
            if(height>=0){
                this->height=height;
            }
            else {
                this->height=0;
            }
        }

        Cuboid(int l=1, int b=1, int h=1){
            height=h;
            setbreadth(b);
            setlength(l);
        }

        int volume() {
            return getbreadth()*getlength()*height;
        }

};
class table
{
private:
    Rectangle top;  // table class ""has"" a rectangle
    int legs;

}


int main()
{
    

    return 0;
}