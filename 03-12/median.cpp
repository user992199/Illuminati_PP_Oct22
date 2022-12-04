#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
int median(int arr[], int n){
	sort(arr, arr+n);
	if(n%2) return arr[n/2];
	else return (arr[n/2] + arr[n/2-1])/2;
}
int main(){
	int arr[] = {23, 435, 324, 4,5, 34, 23, 43, 456, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<median(arr, n)<<endl;
	print(arr, n);
	return 0;
}