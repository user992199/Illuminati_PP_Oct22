#include<iostream>
using namespace std;
long long int factorial(int n){
	long long int f = 1;
	for(int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}
long long nCr(int n, int r){
	return factorial(n) / (factorial(r) * factorial(n-r));
}
int main(){
	int n, r;
	cin>>n>>r;
	cout<<nCr(n, r)<<endl;
	return 0;
}