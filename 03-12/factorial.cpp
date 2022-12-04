#include<iostream>
using namespace std;
long long int factorial(int n){
	long long int f = 1;
	for(int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}
int main(){
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}