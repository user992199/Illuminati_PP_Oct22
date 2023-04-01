#include<iostream>
using namespace std; 
int gud_sub(int * arr, int n){
	int * freq = new int[n];
	memset(freq, 0, n * sizeof(int));
	freq[0]++;
	int csum = 0;
	for(int i = 0; i < n; i++){
		csum += arr[i];
		csum %= n;
		freq[csum]++;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += freq[i] * (freq[i]-1) / 2;
	}
	return ans;
}
int main(){
	int arr[] = {2, 3, 5, 6, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<gud_sub(arr, n)<<endl;
	return 0;
}