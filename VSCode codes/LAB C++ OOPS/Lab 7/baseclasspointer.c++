// C++ program to illustrate the
// implementation of the base class
// pointer pointing to derived class
#include <iostream>
using namespace std;

// Base Class
class A {
public:
	int a;

	// Function to display the base
	// class members
	void display()
	{
		cout << "Displaying Base class"
			<< " variable a: " << a << endl;
	}
};

// Class derived from the Base Class
class B : public A {
public:
	int b;

	// Function to display the base
	// and derived class members
	void display()
	{
		cout << "Displaying Base class"
			<< "variable a: " << a << endl;
		cout << "Displaying Derived "
			<< " class variable b: "
			<< b << endl;
	}
};

// Driver Code
int main()
{
	// Pointer to base class
	A* base_class_pointer;
	A obj_base;
	B obj_derived;

	// Pointing to derived class object
	base_class_pointer = &obj_derived;

	base_class_pointer->a = 34;
	
	// If you uncomment this line of code this will cause the following error
	// As base-class pointer cannot access the derived class variable.
	//base_class_pointer->b = 98;
	//output: error: ‘class BaseClass’ has no member named ‘var_derived’
	
	// Calling base class member function
	base_class_pointer->display();

	base_class_pointer->a = 3400;
	base_class_pointer->display();

	B* derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->a = 9448;
	derived_class_pointer->b = 98;
	derived_class_pointer->display();
	return 0;
}
