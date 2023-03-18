#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int i=0;
    int A[1000]={0};
    while(true){
        cin>>A[i];
        
        if(cin.get()=='\n'){
            break;
        i++;
        }
        
    }
    int Ar[i+1];
    for(int j=0;j<i+1;j++){
        Ar[j]=A[j];
    }
    for(int j=0;j<sizeof(Ar);j++){
        cout<<Ar[j];
    }

    return 0;
}