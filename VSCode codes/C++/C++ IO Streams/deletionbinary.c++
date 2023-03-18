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
            cin.ignore();
            gets(name);
        }    

        void display(){
            cout<<"Roll is "<<roll;
            cout<<"  Name is "<<name<<endl;
        }
        int rtn(){
            return roll;
        }
};

int main()
{
    Student co;
    // ofstream obj("Todayselection.dat",ios::binary);
    // for(int i=0; i<5; i++){
    //     co.read();
    //     obj.write((char*)&co,sizeof(co));
    // }
    // obj.close();

    ifstream r("Todayselection.dat",ios::binary);
    ofstream w("New.dat",ios::binary);

    //roll no to be deleted
    int roll = 10;


    while(r.read((char*)&co,sizeof(co))){
        if(roll!=co.rtn()){
            w.write((char*)&co,sizeof(co));
            //all data copied except the one to be copied
        }
    }
    r.close();
    w.close();
    remove("Todayselection.dat");
    rename("New.dat","Todayselection.dat");

    ifstream in("Todayselection.dat",ios::binary);
    while(in.read((char*)&co,sizeof(co))){
        co.display();
    }

    return 0;
}