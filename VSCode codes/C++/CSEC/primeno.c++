// #include <iostream>
// #include <cmath>

// using namespace std;
// bool isPrime(int n)
// {
//     if(n<=1){
//         return false;

//     }
//     for(int i=2; i<n;i++)
//     {
//         if(n%i==0){
//             return false;
//         }

//     }
//     return true;
// }

// int main()
// {
//     isPrime(11)?cout<<"true\n":cout<<"false\n";
//     isPrime(15)?cout<<"true\n":cout<<"false\n";

//     return 0;
// }


#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    if(n%2==0||n%3==0){
        return false;
    }
    for(int i=5; i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        return false;
    }
    return true;
}


int main()
{
    isPrime(11)?cout<<"true\n":cout<<"false\n";
    isPrime(4531)?cout<<"true\n":cout<<"false\n";

    return 0;
}



