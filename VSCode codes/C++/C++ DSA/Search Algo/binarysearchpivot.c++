#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

int pivotSearch(int arr[], int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==arr[0]){
            
            if(size==2){
                if(arr[0]<arr[1]){
                    return mid;}
                else{
                    return 1;
                }
            }
            else return 0;
        }
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        if(arr[mid]<arr[0]){
            e=mid;
            if(arr[mid-1]>arr[mid]){
                return mid;
            }
        }
        mid=s+(e-s)/2;
    }
}

int main()
{
    int a[]={423};
    cout<<pivotSearch(a,1);   

    return 0;
}