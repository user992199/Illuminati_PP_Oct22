#include<iostream>
using namespace std;
bool check_prime(int n){
	if(n<=1){
		return true;
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

int main(){
	cout<<check_prime(7)<<endl;
	return 0;
}