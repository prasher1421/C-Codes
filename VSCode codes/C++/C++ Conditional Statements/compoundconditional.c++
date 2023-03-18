#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int hour;
    cout<<"Enter hours ";
    cin>>hour;

    if(hour>=9&&hour<=18){
        cout<<"Working hoursss...";
    }

    else{
        cout<<"Leisure time....";
    }

    return 0;
}