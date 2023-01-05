#include<iostream>
using namespace std;
int sum_of_arr(int arr[], int n){
	// base case
	if(n == 0) return 0;
	// recursive case
	return arr[n-1] + sum_of_arr(arr, n-1);
}
int sum_of_arr_2(int arr[], int i, int n){
	// base case
	if(i == n) return 0;
	// recursive case
	return arr[i] + sum_of_arr_2(arr, i+1, n);
}
int main(){
	int arr[] = {1, 4, 2, 4, 6, 7, 5, 3, 19, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<sum_of_arr_2(arr, 0, n)<<endl;
	return 0;
}