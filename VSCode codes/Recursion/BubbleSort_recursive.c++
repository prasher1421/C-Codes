#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[] , int size){
    if(size==1)
        return;

    for(int i = 0; i< size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return BubbleSort(arr, size -1);
}

int main(){
    int arr[] = {4,3,1,6,8};
    BubbleSort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
}