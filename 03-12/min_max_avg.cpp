#include<iostream>
using namespace std;
int min_arr(int arr[], int n){
	int mini = 0;
	for(int i = 1; i < n; i++){
		if(arr[i] < arr[mini])
			mini = i;
	}
	return arr[mini];
}
int max_arr(int arr[], int n){
	int mini = 0;
	for(int i = 1; i < n; i++){
		if(arr[i] > arr[mini])
			mini = i;
	}
	return arr[mini];
}
float avg_arr(int arr[], int n){
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	return sum/n;
}
int main(){
	int arr[] = {1, 2, 3, 4, 5, 11, -7};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<min_arr(arr, n)<<endl;
	cout<<max_arr(arr, n)<<endl;
	cout<<avg_arr(arr, n)<<endl;
	return 0;
}