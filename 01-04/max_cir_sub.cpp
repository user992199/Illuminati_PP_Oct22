#include<iostream>
using namespace std;
int kadane(int * arr, int n){
	int cs = 0, ms = INT_MIN;
	for(int i = 0; i < n; i++){
		cs += arr[i];
		ms = max(ms, cs);
		cs = max(cs, 0);
	}
	return ms;
}
int mch(int * arr, int n){
	int ts = 0;
	for(int i = 0; i < n; i++){
		ts += arr[i];
		arr[i] *= -1;
	}
	ts += kadane(arr, n);
	for(int i = 0; i < n; i++){
		arr[i] *= -1;
	}
	return ts;
}
int max_cir(int * arr, int n){
	int op1 = kadane(arr, n); 
	int op2 = mch(arr, n);
	if(!op2) return op1;
	return max(op1, op2);
}
int main(){
	int arr[] = {-1, -2, -3, -4, -5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<kadane(arr, n)<<endl;
	cout<<max_cir(arr, n)<<endl;
	return 0;
}