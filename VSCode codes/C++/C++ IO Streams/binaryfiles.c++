#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;

class Student{
    int roll;
    char name[30];
    public:
        void read(){
            cout<<"Enter Roll ";
            cin>>roll;
            cout<<"Enter Name ";
            gets(name);
        }    

        void display(){
            cout<<"Roll is "<<roll;
            cout<<"Name is "<<name;
        }
        int rtn(){
            return roll;
        }
};

int main()
{
    Student co;
    ofstream obj("Today.dat",ios::binary);
    // co.read();
    // obj.write((char*)&co , sizeof(co));

    int r = 5;

    obj.close();

    ifstream in;
    in.open("Today.dat",ios::binary);
    // in.read((char*)&co,sizeof(co));
    // co.display();

    //to search for roll no value 5 here
    while(in.read((char*)&co,sizeof(co))){
        if(r==co.rtn()){
            co.display();
        }
    }


    return 0;
}