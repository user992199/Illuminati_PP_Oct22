#include<iostream>
using namespace std;
int main(){
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int temparr[n];
	for(int i = 0; i < n; i++){
		temparr[i] = arr[n-i-1];
	}
	for(int i = 0; i < n; i++){
		arr[i] = temparr[i];
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}