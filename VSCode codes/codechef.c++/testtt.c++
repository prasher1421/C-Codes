#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    int d;
	    string n;
	    int count=0;
	    cin>>d;
	    getline(cin,n);
	    for(int i=0;i<d;i++)
	    {
	        if(n[i]=="0"||n[i]=="5")
	        {
	            count++;
	        }
	        
	    }
	    if(count>0){
	        cout<<"YES";
	    }
	    else{
	        cout<<"NO";
	    }
	}
	return 0;
}
