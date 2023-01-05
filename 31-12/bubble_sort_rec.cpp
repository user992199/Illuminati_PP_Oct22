#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void bubble_sort_rec_par(int arr[], int n, int i){
	// base case
	if(i == n-1) return;
	// recursive case
	for(int j = 0; j < n-i-1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
	}
	bubble_sort_rec_par(arr, n, i+1);
}
void bubble_sort_rec(int arr[], int n, int i, int j){
	// base case
	if(i == n-1) return;
	if(j == n-i-1){ 
		bubble_sort_rec(arr, n, i+1, 0);
	 	return;
	}
	// recursive case
	if(arr[j] > arr[j+1]){
		swap(arr[j], arr[j+1]);
	}
	bubble_sort_rec(arr, n, i, j+1);
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubble_sort_rec_par(arr, n, 0);
	// bubble_sort_rec(arr, n, 0, 0);
	print(arr, n);
	return 0;
}