#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class Student {
    public:     //access specifier set as public so that members can be accessed out of the class
        string name;
        string roll_no;
        string dept_name;

        void readStudent(){
            getline(cin,name);
            getline(cin,roll_no);
            getline(cin,dept_name);

        }
        void displayStudent(){
            cout<<name<<"'s Roll no is "<<roll_no<<" from department of "<<dept_name;
        }
};


int main()
{
    Student Aryan;
    Aryan.name="Aryan Prasher";
    Aryan.readStudent();
    Aryan.displayStudent();

    Student Ricky;
    Ricky.name="Ricky Chaudhary";
    Ricky.readStudent();
    Ricky.displayStudent();

    Student Shradhay;
    Shradhay.name="Aryan";
    Shradhay.readStudent();
    Shradhay.displayStudent();

    Student X;
    X.name="Unknown";
    X.readStudent();
    X.displayStudent();

    Student Y;
    Y.name="Someone";
    Y.readStudent();
    Y.displayStudent();



    return 0;
}