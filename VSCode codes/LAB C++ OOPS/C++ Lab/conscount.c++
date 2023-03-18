#include <bits/stdc++.h>

using namespace std;

#define pi (3.14159)
#define sq(a) a*a


int main()
{
    char a;
    int str[26]={0};
    int    i=0,   sizeofA=0;
    while(true){
        // A[i] = new string;
        cin >> a;
        a=toupper(a);
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'  )
        {
            str[a-'A']+=1;
            i++;
        }
        else if(a>='A'&&a<='Z'){
            break;
        }
        else{
            break;
        }
    }
    cout<<"A :: "<<str[0]<<endl;
    cout<<"E :: "<<str[4]<<endl;
    cout<<"I :: "<<str[8]<<endl;
    cout<<"O :: "<<str[14]<<endl;
    cout<<"U :: "<<str[20]<<endl;
    
    return 0;
}