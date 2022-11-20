#include<iostream>
using namespace std;
bool check_prime(int n){
	if(n<=1){
		return false;
	}
	int i = 2;
	while(i < n / 2){
		if(n%i == 0){
			return false;
		}
		i = i+1;
	}
	return true;
}
void print_prime(int i, int n){
	for(; i < n; i++){
		if(check_prime(i)){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}
int main(){
	print_prime(1, 1000);
	return 0;
}