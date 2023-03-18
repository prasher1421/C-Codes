#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int i=0, arr[1000];
    while(cin>>arr[i])
    {
        i++;
    }
    // int arr2[i];
    // for (int j=0; j<i; j++){
    //     arr2[j]=arr[j];
    // }

    for (int k=0; k<i; k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}