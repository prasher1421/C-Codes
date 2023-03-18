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

int binarySearch(int arr[],int size, int key,int p){
    int s=0,e=size-1;
    if(key>arr[0]){
        s=1;
        e=p-1;
    }
    if(key==arr[0]){
        return 0;
    }
    else{
        s=p;
    }
    int mid=s+(e-s)/2;
    while (s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
    
    
}

int main()
{
    int a[]={1,-2,-1,0};
    // cout<<pivotSearch(a,4);
    cout<<binarySearch(a,4,1,pivotSearch(a,4));
    return 0;
}