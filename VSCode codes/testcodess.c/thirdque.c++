#include<bits/stdc++.h>

using namespace std;

int main() {
	string str;
	getline(cin,str);
	bool abc = true;
	for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			cout<<str[i];
			if(abc){
				abc = false;
			}else{
				abc = true;
			}
		}else{
			if(abc){
				cout<<(char)toupper(str[i]);
			}else{
				cout<<str[i];
			}
		}
	}
	return 0;
}