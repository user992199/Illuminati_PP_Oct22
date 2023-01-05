#include<iostream>
using namespace std;
int factorial(int n){
	// base case
	if(n <= 0){
		return 1;
	}
	// recursive case
	int chota_ans = factorial(n-1);
	// forming solution
	int bada_ans = n * chota_ans;
	return bada_ans;
}
int main(){
	int n = 10;
	cout<<factorial(n)<<endl;
	return 0;
}