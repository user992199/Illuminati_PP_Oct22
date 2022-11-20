#include<iostream>
using namespace std;
// syntax
/* 
return_type identifier(parameter){ 
	// task;
	return value;
}
*/
void hello(int n){
	while(n--)
		cout<<"Hello ";
}
int add(int a, int b){
	int c = a+b;
	cout<<"inside fucn: "<<c<<endl;
	return c;
}
int return_0(){
	return 0;
}
int main(){
	// invoking or calling
	// syntax
	// identifier(arguments);
	// int n = 5;
	// cin>>n;
	hello(10);
	cout<<endl;
	// int c = add(123, 7856);
	int c = add(10, 20);
	cout<<c<<endl;
	c = return_0();
	cout<<c<<endl;
	return 0;
}