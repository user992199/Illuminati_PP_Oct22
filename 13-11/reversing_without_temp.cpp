#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n/2; i++){
		swap(arr[i], arr[n-i-1]);
		// int temp = arr[i];
		// arr[i] = arr[n-i-1];
		// arr[n-i-1] = temp;
		// arr[i] = arr[i] + arr[n-i-1];
		// arr[n-i-1] = arr[i] - arr[n-i-1];
		// arr[i] = arr[i] - arr[n-i-1];
		// arr[i] = arr[i] + arr[n-i-1] - (arr[n-i-1] = arr[i]);
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}