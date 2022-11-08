#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(isupper(ch)){ // ch <= 'z' and ch >= 'a'
		cout<<"Lowercase\n";
	}else if(isupper(ch)){ // ch <= 'Z' and ch >= 'A'
		cout<<"Uppercase\n";
	}else{
		cout<<"Invalid\n";
	}
	return 0;
}