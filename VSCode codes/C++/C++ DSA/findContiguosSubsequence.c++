#include <bits/stdc++.h>

using namespace std;


int FindContiguousSeq(int n,int arr[]){

    int sum = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            sum+=arr[i];
            maxi=max(maxi,sum);
        }
        else{
            sum=0;
        }
    }
    return maxi;

}

int main()
{
    int arr[] = {1,2,4,-2,3};
    cout<<FindContiguousSeq(5,arr);
    

    return 0;
}