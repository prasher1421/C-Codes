#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int array[] , int n){
    bool flag = false;
    int count=0,swap = 0;
    for(int i = 0; i < n; i++){
        flag = false;
        for(int j = 0; j < (n - i) - 1; j++){
            if(array[j]>array[j+1]){
                flag = true;
                int temp = array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap++;
            }
            count++;
        }
        if(flag==false)
        {
            break;
        }

    }

    cout<<"\nNumber of comparisons : "<<count<<endl;
    cout<<"Number of swaps : "<<swap<<endl;
}

int main()
{
    int array[5]={5,4,3,2,1};
    int *dynamic_array = new int(5);
    
    
    cout<<"\nEnter Values for dynamic array\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>dynamic_array[i];
    }

    cout<<"\nStatic array before sorting\n";
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\nDynamic array before sorting\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<dynamic_array[i]<<" ";
    }
    
    bubbleSort(array ,5);

    cout<<"\nStatic array after sorting\n";
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout<<array[i]<<" ";
    }

    bubbleSort(dynamic_array,5);

    cout<<"\nDynamic array after sorting\n";
    for (int i = 0; i < 5; i++)
    {
        cout<<dynamic_array[i]<<" ";
    }

    return 0;
}