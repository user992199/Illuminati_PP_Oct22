#include<iostream>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void dnf(int * arr, int n){
	int low = 0, mid = 0, high = n-1;
	while(mid <= high){
		// cout<<mid<<": ";
		// print(arr, n);
		if(arr[mid] == 0) swap(arr[low++], arr[mid++]); 
		else if(arr[mid] == 1) mid++;
		else swap(arr[mid], arr[high--]);
	}
}
int main(){
	int arr[] = {0, 0, 2, 2, 1, 1, 1, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	// print(arr, n);
	dnf(arr, n);
	print(arr, n);
	return 0;
}