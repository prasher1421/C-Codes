#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    char a[5]={'A','B','C','D','E'};
    for (int i=0;i<5;i++){
        for(int j=0;j<i+1;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<5;i++){
        for(int j=4;j>i;j--){
            cout<<a[4-j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}