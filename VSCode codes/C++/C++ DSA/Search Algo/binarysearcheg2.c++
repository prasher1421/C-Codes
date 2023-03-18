#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

int peakSearch(int arr[],int size){
    int max=0;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        max=mid;
        if(arr[max]<arr[mid-1]){
            e=mid-1;
        }
        else if(arr[max]<arr[mid+1]){
            s=mid+1;
        }
        else{
            return max;
        }
        mid=s+(e-s)/2;
    }
    
}

int main()
{
    int a[11]={0,1,3,45,66,53,22,4,3,2,1};
    cout<<peakSearch(a,11);

    return 0;
}