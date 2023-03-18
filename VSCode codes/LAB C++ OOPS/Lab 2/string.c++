#include<bits/stdc++.h>

using namespace std; 

int main(){

    string s;
    cout<<"Enter the string: "<<endl;
    getline (cin, s);

    transform(s.begin(),  s.end(), s.begin(),::tolower); 
    int a = 0, e = 0, i = 0,o=0 ,u=0,j=0;

    char *ptr;
    ptr=&s[0]; 
    
    while(j<s.size()){
        switch (*(ptr+j))
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
        
        }

    }
    cout<<"No. of 'A's: "<<a<<endl; 
    cout<<"No. of 'E's: "<<e<<endl;
    cout<<"No. of 'I's: "<<i<<endl;
    cout<<"No. of 'O's: "<<o<<endl;
    cout<<"No. of 'U's: "<<u<<endl; 
    cout<<"Total no. of vowels: "<<a+e+i+o+u<<endl;

    return 0;
    

}