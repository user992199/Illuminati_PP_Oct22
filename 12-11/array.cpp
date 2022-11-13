#include<iostream>
using namespace std;
int main(){
	int arr[10];
	// arr[4] = 100;
	// cin>>arr[0]>>arr[1];
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	for(int i = 0; i < 10; ++i){
		cin>>arr[i];
	}
	for(int i = 0; i < 10; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}