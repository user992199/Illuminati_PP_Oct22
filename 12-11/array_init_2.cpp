#include<iostream>
using namespace std;
int main(){
	int arr[] = {'a', 4, 1, 3, 43, 18, 17, 29}; // init  of array
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; ++i){
		// cout<<i<<endl;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}