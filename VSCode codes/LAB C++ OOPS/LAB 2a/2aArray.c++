#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>*(a+i);
    }

    int m;
    cin>>m;

    for(int i=m-1; i>=0; i--){
        cout<<*(a + i)<<" ";
    }

    return 0;
}