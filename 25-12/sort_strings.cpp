#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string str[] = {
		"hello", "world", "Coding", "Blocks"
	};
	sort(str, str+4);
	for(int i = 0; i < 4; i++){
		cout<<str[i]<<endl;
	}
	return 0;
}