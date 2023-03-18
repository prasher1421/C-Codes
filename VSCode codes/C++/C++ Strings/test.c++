#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;
// int x=123;
// void out(){
//     x=234;
//     cout<<++::x<<endl;
// }

int main()
{
    string a="ABCCBA";
    string b=a;
    reverse(a.begin(),a.end());
    cout<<a.compare(b)<<endl;
    

    int A[6]={1,2,8,4,7,2};
    int n=sizeof(A)/sizeof(A[0]);
    sort(A,A+n);
    for (int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    // out();
    return 0;
}