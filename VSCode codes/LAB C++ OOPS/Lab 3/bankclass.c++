#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

class bank_account {
    public:     //access specifier set as public so that members can be accessed out of the class
        string name;
        int acc_no;
        string acc_type;
        long bal;

        void readvalues(){
            cout<<"Enter your name: "<<endl;
            getline(cin,name);
            // cin.ignore();

            cout<<"Enter your acc_no: "<<endl;
            cin>>acc_no;
            cin.ignore();

            cout<<"Enter your account type: "<<endl;
            cin>>acc_type;
            cin.ignore();

            cout<<"Enter your bank balance: "<<endl;
            cin>>bal;
            cin.ignore();

        }

        void deposit(long x){
            if(x>0){    //if positive amount is being deposited
                bal+=x;
                cout<<"Amount has been deposited"<<endl;
            }

            else{cout<<"Invalid amount"<<endl;} //if zero or negative amount is entered
        }

        void withdraw(long y){
            cout<<"Your current balance is : "<<bal<<endl;

            if(y>bal){
                cout<<"Insufficient balance"<<endl;
            }

            else{
                bal-=y;
                cout<<"Remaining balance is : "<<bal<<endl;
            }

        }

        void display(){
            cout<<name<<"\n Your current balance is -> "<<bal<<endl;
        }
};


int main()
{

    bank_account ar;
    ar.readvalues();
    ar.deposit(5000);
    ar.withdraw(4000);
    ar.display();


    bank_account ya;
    ya.readvalues();
    ya.deposit(10000);
    ya.withdraw(6500);
    ya.display();


    bank_account np;
    np.readvalues();
    np.deposit(2500);
    ar.withdraw(40000);
    ar.display();


    bank_account ra;
    ra.readvalues();
    ra.deposit(600);
    ra.withdraw(20000);
    ra.display();


    bank_account sh;
    sh.readvalues();
    sh.deposit(0);
    sh.withdraw(30000);
    sh.display();

    return 0;
}