#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;while(t--){
	    int n,x,y;cin>>n>>x>>y;
	    
	    int straightp = 2*n-2;
	    int dia1,dia2;
	   // for(int i=1;i<=n;i++){
	   //     for(int j=1;j<=n;j++){
	            
	        
	            
	   //     }    
	   // }
	    dia1= n- abs((x-y)) - 1;
	    dia2 = n -1 - abs(n-(x+y));
	    int ans = straightp+dia1+dia2;
	    
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
