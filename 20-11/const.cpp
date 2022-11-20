#include<iostream>
using namespace std;
//syntax of macros
// #define identifier value
// #define pie (3.14+1)
#define forl for(int i = 0; i < 10; i++)
const float pie = 3.14;
int main(){
	// const datatype identifier = value;
	// const float pie;
	// pie = 3.14;
	cout<<'\t'<<pie<<endl;
	cout<<'\t'<<2*pie*7<<endl;
	cout<<'\t'<<2*(3.14+1)*7<<endl;
	forl
		cout<<i<<" ";
	const int i = 3.14+1;
	return 0;
}