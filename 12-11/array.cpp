#include<iostream>
using namespace std;
int main(){
	// arr[4] = 100;
	// cin>>arr[0]>>arr[1];
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	int n = 10;
	int arr[n]; // declaration  of array
	for(int i = 0; i < n-5; ++i){
		arr[i] = i;
	}
	for(int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}