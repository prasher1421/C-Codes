#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Student{
    string rollNo;
    float CGPI;
    int semester;
    string name;

    public:
        void displayRecord(){
            cout<<name<<", Roll Number "<<rollNo<<" in semester "<<semester<<" has CGPI "<<CGPI<<endl;
        }

        void addDetails(){
            cout<<"\n\nEnter student's name ->> ";
            cin>>name;
            cin.ignore();

            cout<<"\nEnter student's Roll Number ->> ";
            cin>>rollNo;
        
            cout<<"\nEnter student's semester and CGPI ->> ";
            cin>>semester>>CGPI;

        }
        float getCG(){
            return CGPI;
        }

};

int main()
{
    Student array[5];
    cout<<"\nEnter 5 students' details ->> ";

    for (int i = 0; i < 5; i++)
    {
        array[i].addDetails(); 
    }

    for (int i = 0; i < 5; i++)
    {
        if(array[i].getCG() > 8){
            array[i].displayRecord();
        } 
    }

    Student newOne;
    int pos;
    cout<<"Enter position of new Student : \n";
    cin>>pos;

    newOne.addDetails();
    
    for (int i = 0; i < 5; i++)
    {
        if( i == pos ){
            
            newOne.displayRecord();
        }
        array[i].displayRecord();
    }

    
    

    return 0;
}