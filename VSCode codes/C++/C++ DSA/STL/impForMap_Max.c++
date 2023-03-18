#include <bits/stdc++.h>

using namespace std;

#define debug(x) cout<<#x<<" "<<x;


int main(){
    
    int t;cin>>t;while(t--){
        
        map<int, int> mapp;
        
        int n;cin>>n;
        for(int i=0;i<n;i++){
            
            int a;cin>>a;
            
            //way for inserting elements into a map
            mapp[a]++;//way for getting a count of elements inserted
        }

        //inserting map values to a vector
        vector<int> vec ;
        for(auto i:mapp){
            vec.push_back(i.second);
        }
        
        
        int output = *max_element(vec.begin(),vec.end());//for finding greatest element in a vector or other stl
        
        // debug(n);
        // debug(output);
        cout<<(n-output)<<endl;
    }
    
    
    return 0;
}