#include<iostream>
using namespace std;
int main(){
	int i = 1;
	if(++i){ // ++i ; i = 1
		cout<<"inside if\n";
	}
	cout<<i++<<endl; // 1 -> 2
	cout<<i++<<endl; // 3
	cout<<i<<endl; // 4
	return 0;
}