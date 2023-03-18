#include <iostream>
#include <cmath>
using namespace std ;




int main()
{
    int basic_sal;
    float perAllowance, perDeduction;

    cout<<"Enter your basic salary"<<endl;
    cin>>basic_sal;

    cout<<"Enter Percentage of Allowance "<<endl;
    cin>>perAllowance;

    cout<<"Enter Percentage of Deduction"<<endl;
    cin>>perDeduction;

    float net_salary;
    net_salary=basic_sal + basic_sal*perAllowance/100 - basic_sal*perDeduction/100;

    cout<<"Your Net salary is "<<net_salary;







    return 0;
}
