
#include <bits/stdc++.h>
using namespace std;
 
int GcdOfArray(vector<int>& arr, int idx)
{
    //method
    //gcd(1,gcd(2,gcd(3,gcd(4,5))))

    if (idx == arr.size() - 1) {
        return arr[idx]; //recursion will stop if it reaches last ele
    }
    int a = arr[idx];
    int b = GcdOfArray(arr, idx + 1);//b will get a value when array ends 
    return __gcd(a, b);
}
int main() {

    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int> arr;
        int a;
        
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        
        for(int i=0;i<n;i++){
            cout<<(arr[i]/GcdOfArray(arr,0))<<" ";
        }
        cout<<endl;
        
    }
	
	return 0;
}
