#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int size){

    if(size<=1){
        return;
    }


    //because here we start sorting smallest array first;
    InsertionSort(arr, size -1);

    int val = arr[size-1];
    int pos = size -2;

    while( pos >= 0 && arr[pos] > val ){
        arr[pos+1]=arr[pos];
        pos--;
    }
    arr[pos+1] = val;
}

int main(){
    int arr[] = {4,3,1,6,8};

    InsertionSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

}