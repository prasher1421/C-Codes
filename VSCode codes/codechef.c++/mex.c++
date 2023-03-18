#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a
#define debug(x) cout<<#x<<' '<<x<<endl;


int main()
{
    long long int n,m;cin>>n>>m;
    long long int a;
    set<long long int> nn ;
	vector<long long int> num;
    for(int i=0;i<n;i++){
        cin>>a;
        nn.insert(a);
    }
	for(auto i:nn){
		num.push_back(i);
	}
    if(binary_search(num.begin(),num.end(),m)){
        cout<<-1<<endl;
    }
    else{

        long long int missingbtw = num[n-1] - (n-1);
        long long int missingaft = m-num[n-1] -1;
		
		// debug(missingaft);debug(missingbtw);

        if(m>num[n-1])  cout<<(missingaft+missingbtw)<<endl;
        else{
            long long int req=0;
            for (int i = 0; i < m; i++)
            {
                if(!(binary_search(num.begin(),num.end(),i)))   req++;
            }

            cout<<req;
            
        }
    }
    return 0;
} 