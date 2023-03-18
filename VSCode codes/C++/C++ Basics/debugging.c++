#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a

float avgg(int sum){
    return sum*(sum+1)/(2*(sum+1));
}

int main()
{
    float sum =0 , avg =0;
    cin>>sum;
    for(int i=0; i<10 ; i++){
        sum++;
        avg = avgg(sum) ;
    }
    cout<<sum<<endl;
    cout<<avg;

    return 0;
}