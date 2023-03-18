#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin>>T;
	
	
	while(T--)
	{
	    int n,w,A[n];
	    cin>>n>>w;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int a =sizeof(A)/sizeof(A[0]);
	    sort(A,A+a,greater<int>());
	    
	    int sum=0,count;
	    for(int j=0;j<n;j++)
	    {
	        while(sum<w)
	        {
	            sum+=A[j];
	            count=j+1;
	        }
	    }
	    int holi=n-count;
	    cout<<holi;
	    
	}
	
	
	
	
	
	return 0;
}
