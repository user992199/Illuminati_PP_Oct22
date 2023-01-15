#include<iostream>
using namespace std;
int num_of_ways_k(int n, int k){
	// base case
	if(n == 0) return 1;
	// recursive case
	int ans = 0;
	for(int i = 1; i<=k and i<=n; i++){
		ans += num_of_ways_k(n-i, k);
	}
	return ans;
}
int num_of_ways(int n){
	// base case
	if(n == 0 or n == 1){
		return 1;
	}
	// recursive case
	return num_of_ways(n-1) + num_of_ways(n-2);
}
int main(){
	int n = 6, k = 3;
	cout<<num_of_ways_k(n, k)<<endl;
	return 0;
}