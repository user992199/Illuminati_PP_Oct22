#include<iostream>
using namespace std;
int main(){
	int arr[100] = {0}; // init
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}