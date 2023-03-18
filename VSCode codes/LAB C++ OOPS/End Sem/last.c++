#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Shape//abstract class
{
	public: 
        double a,b;//two members
		void get_data (){
			cin>>a>>b;
		}
        //pure virtual funtion which is to be overrided in derived class
		virtual void display_area () = 0;
};

class Triangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of triangle "<<(1.0/2.0)*a*b<<endl;
	}
};

class Rectangle:public Shape
{
	public: void display_area ()
	{
		cout<<"Area of rectangle "<<a*b<<endl;
	}
};


int main()
{	
	//using base class pointer and derived class object
	Shape *triangle = new Triangle();
	cout<<"Enter Base, Height for Triangle: ";
	triangle->get_data();
	triangle->display_area();
	
	Shape *rectangle = new Rectangle();
	cout<<"Enter length and breadth: ";
	rectangle->get_data();
	rectangle->display_area();
	return 0;	
}