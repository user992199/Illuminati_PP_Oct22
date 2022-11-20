#include<iostream>
using namespace std;
// forward declaration
// syntax
// return_type identifier(parameters);
int add(int , int);
void print_hello();
void print_world();
int main(){
	print_hello();
	cout<<add(0, 1)<<endl;
	return 0;
}
int add(int a, int b){
	return a+b;
}
void print_hello(){
	cout<<"Hello ";
	print_world();
}
void print_world(){
	cout<<"World\n";
}