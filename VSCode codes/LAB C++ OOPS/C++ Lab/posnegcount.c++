#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    long long x;
    int pos=0,neg=0,zero=0;
    for (int i=0;i<1000;i++){
        cin>>x;
        if(x>0){pos++;}
        else if(x==-1){
                break;
            }
        else if(x<0){
            neg++;}
        else{zero++;}
    }
    cout<<pos<<" "<<neg<<" "<<zero;

    return 0;
}