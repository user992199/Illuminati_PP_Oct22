#include<iostream>
using namespace std;
int length(char s[]){
	int l = 0;
	for(; ; l++){
		if(s[l] == '\0')
			return l;
	}
}
int main(){
	char s[100];
	cin.get(s, 100);
	cout<<length(s)<<endl;
	char k;
	cin.ignore();
	cin.get(k);
	cout<<k;
	return 0;
}