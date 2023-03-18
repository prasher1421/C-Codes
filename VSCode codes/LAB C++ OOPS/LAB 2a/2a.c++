#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

int sum(int *m, int n){

    int i,j,sum_=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
             
            if(i==j){
                sum_+=*(m + i*n + j);//for diagonal elements i=j so they add up to sum
            }
        }
    }

    return sum_;

}

int main()
{
    int n;
    cin>>n; // getting dimensions of matrix
    
    int *SMatrix = new int[n*n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin>>*(SMatrix + i*n + j);//getting matrix elements as input
            
        }
    }

    cout<<"SUM OF DIAGONAL ELEMENTS-> "<<sum(SMatrix,n);

    return 0;
}