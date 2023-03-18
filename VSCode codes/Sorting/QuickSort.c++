#include <bits/stdc++.h>
using namespace std;

int partition(int arr[] , int s, int e){
    //COUNT ALL ELEMENT LESS THAN PIVOT 
    //PIVOT INDEX = s + COUNT 

    int pivot = arr[s];
    int count = 0;
    for(int i = s+1; i<=e;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    //put pivot index at its right place
    swap(arr[s],arr[pivotIndex]);


    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){

        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[j--],arr[i++]);
        }
    }

    return pivotIndex;

}

void QuickSort(int arr[], int s, int e){

    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);

    QuickSort(arr,p+1,e);
    QuickSort(arr,s,p);

}

int main(){
    int arr[] = {4,3,1,6,8};

    QuickSort(arr,0,4);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

}