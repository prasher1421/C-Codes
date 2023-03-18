#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int r=4 , c=5;
    // cin>> r>> c;

    for (int i=0; i<r; i++){             //hollow
        for(int j=0; j<c; j++){
            if(i==0 || i==r-1){
                cout<<"@";
            }
            else if(j==0 || j==c-1){
                cout<<"@";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}