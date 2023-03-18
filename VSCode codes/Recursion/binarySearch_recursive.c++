#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    if(s>e){
        return -1;
    }

    int mid = s + (e-s)/2;

    if(target == arr[mid]){
        return mid;
    }
    else{
        if(target > arr[mid]){
            return binarySearch(arr, mid + 1, e , target);
        }
        else{
            return binarySearch(arr, s, mid - 1, target);
        }
    }
}

int main()
{
    int arrr[] = {2,3,5,8,10,18,34};
    cout<<binarySearch(arrr,0,6,34);
    return 0;
}
