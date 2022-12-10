#include<iostream>
using namespace std;
int main(){
	int a;
	int * aptr = &a, *b = &a;
	cout<<aptr<<endl;
	cout<<&a<<endl;
	cout<<sizeof(aptr)<<endl;
	cout<<sizeof(&a)<<endl;
	cout<<*aptr<<endl;
	a = 10;
	cout<<*aptr<<endl;
	*aptr = 100;
	cout<<a<<endl;
	cout<<aptr<<endl;
	return 0;
}