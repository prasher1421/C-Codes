#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int x;
    cout<<"Enter a number-->";
    cin>>x;


    if(x%2==0){
        cout<<"Entered number is even.";
    }
    else{
        cout<<"Entered number is odd.";
    }

    return 0;
}