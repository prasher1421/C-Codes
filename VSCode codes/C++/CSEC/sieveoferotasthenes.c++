#include <iostream>
#include <cmath>

using namespace std;

void primeSieve(int n){
    int prime[1000]={0}; // for marking multiples

    for(int i=2; i<=n;i++)// start from 2 bcz least prime number 
    {
        if (prime[i]==0)// strt marking multiples of prime numbers 
        {
            for(int j=i*i;j<=n;j+=i) // start from square of number then normal increment
            {
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;
     
    primeSieve(n);


    return 0;
}