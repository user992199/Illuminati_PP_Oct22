#include<iostream>
using namespace std;
int fibonacci(int n){
	// base case
	if(n == 0 or n == 1){
		// cout<<n<<" ";
		return n;
	}
	// recursive cases
	return fibonacci(n-1) + fibonacci(n-2);
	// int ca1 = fibonacci(n-1);
	// int ca2 = fibonacci(n-2);
	// // form solution
	// int ba = ca1 + ca2;
	// cout<<ba<<" ";
	// return ba;

}
int main(){
	int n = 10;
	for(int i = 0; i <= n; i++)
		cout<<fibonacci(i)<<" ";
	cout<<endl;
	return 0;
}