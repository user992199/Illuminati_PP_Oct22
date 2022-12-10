#include<iostream>
using namespace std;
int main(){
	char a = 'k';
	// syntax
	// (int*)&char
	char * chp = &a;
	cout<<*(long long*)&a<<endl;
	cout<<*(double*)&a<<endl;
	cout<<*(int*)&a<<endl;
	cout<<*(bool*)chp<<endl;
	int i = 100;
	cout<<(char*)&i<<endl;
	int * iptr;
	cout<<*iptr<<endl;
	return 0;
}