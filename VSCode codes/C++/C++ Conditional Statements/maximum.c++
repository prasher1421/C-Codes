#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int x, y;
    cout<<"Enter two numbers-->";
    cin>>x>>y;
    if(x>y){
        cout<<x<<" is the larger number.";
    }
    else{
        cout<<y<<" is the larger number.";
    }

    return 0;
}