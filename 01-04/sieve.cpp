#include<iostream>
using namespace std;
void sieve(int n){
	bool * arr = new bool[n+1];
	arr[0] = false;
	arr[1] = false;
	arr[2] = true;
	for(int i = 3; i <= n; i++){
		if(i%2) arr[i] = true;
		else arr[i] = false;
	}
	for(int i = 3; i*i <= n; i+=2){
		if(arr[i]){
			for(int mul = i*i; mul <= n; mul += i*2){
				arr[mul] = false;
			}
		}
	}
	for(int i = 2; i < n; i++){
		if(arr[i]) cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	int n = 100;
	sieve(n);
	return 0;
}