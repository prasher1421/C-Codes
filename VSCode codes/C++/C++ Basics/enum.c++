#include <iostream>
#include <cmath>
using namespace std;

enum day {mon=2,tue,wed,thu,fri,sat,sun};  // created a data type of value mon tue....


int main()
{
    day d;//day type value is given to d
    //d=1; error
    d=fri;
    //mon++; error
    cout<<d<<endl;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;







    
    return 0;
}
