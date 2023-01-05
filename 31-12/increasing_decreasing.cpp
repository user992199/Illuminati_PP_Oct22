#include<iostream>
using namespace std;
void print_num(int n){
	// base case 
	if(n==0) return;
	// recursive case
	print_num(n-1);
	// form solution
	cout<<n<<" ";
}
void print_num_dec(int n){
	// base case
	if(n==0) return;
	// form solution
	cout<<n<<" ";
	// recursive case
	print_num_dec(n-1);
}
int main(){
	int n = 10;
	print_num(n);
	cout<<endl;
	print_num_dec(n);
	cout<<endl;
	return 0;
}