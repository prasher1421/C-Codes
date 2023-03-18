#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int size){

    if(size==1){
        return;
    }
    int min = INT_MAX;
    int index;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
            index=i;
        }
    }
    swap(arr[index],arr[0]);
    return SelectionSort(arr+1,size-1);
}

int main(){
    int arr[] = {4,3,1,6,8};

    SelectionSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

}