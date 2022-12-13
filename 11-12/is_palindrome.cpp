#include<iostream>
using namespace std;
int length(char s[]){
	int l = 0;
	for(; ; l++){
		if(s[l] == '\0')
			return l;
	}
}
bool is_palin(char s[]){
	int j = length(s)-1;
	int i = 0;
	while(i<j){
		if(s[i++]!=s[j--]) return false;
	}
	return true;
}
int main(){
	char arr[100];
	cin.getline(arr, 100);
	is_palin(arr) ? cout<<"Yes\n" : cout<<"No\n"; 
	return 0;
}