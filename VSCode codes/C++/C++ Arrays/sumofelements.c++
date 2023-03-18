#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int A[n];
    for (int i=0 ;i<n;i++)
    {
        cin>>A[n];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=A[n];
    }
    cout<<sum;
    return 0;
}