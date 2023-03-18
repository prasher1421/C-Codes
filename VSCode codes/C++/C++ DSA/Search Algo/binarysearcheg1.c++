#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
//FIRST AND LAST  POSTION OF ELEMENT IN ARRAY
int firstocc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid =s+(e-s)/2;
    int ans =-1;
    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int main()
{
    int a[8]={1,2,2,2,2,2,4,5};
    cout<<firstocc(a,8,3);

    return 0;
}