#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

//linear search
/*int linsearch(int a){    
    for (i=0;i<n;i++){
        if(arr[i]==a){
            return i;
        }
    }
    return -1;
}
*/

int binarySearch(int arr[],int size, int key){
    int s = 0; 
    int e = size-1;
    int mid = (s+e)/2;//s+(e-s)/2;for high int ranges

    while(s<=e){
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        mid = (s+e)/2;//s+(e-s)/2;for high int ranges
    }
    return -1;
}

int main()
{
    int even[6]={2,22,233,434,555,556};
    int odd[5]={2,22,233,434,555};
    int size = sizeof(even)/sizeof(*even);
    int a = binarySearch(even,size,233);
    if(a==-1)
    {cout<<"Not Found";}
    else{cout<<"Found at "<<a;}
    // int size =sizeof(even)/sizeof(even[0]);
    // cout<<size;
    return 0;
}