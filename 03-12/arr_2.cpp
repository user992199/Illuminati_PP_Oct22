#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	cout<<"size: "<<sizeof(arr)<<endl;
}
void update(int arr[], int n){
	for(int i = 0; i < n ; i++){
		arr[i] += 5;
	}
}
int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	update(arr, n);
	print(arr, n);
	return 0;
}