#include<iostream>
using namespace std;
int main(){
	int n = 100;
	char* arr = new char [n];
	cout<<sizeof(arr)<<endl;
	for(int i = 0; i < n; i++){
		*(arr+i) = i+1;
		cout<<arr[i]<<" ";
 	}
 	cout<<endl;
 	delete []arr;
 	arr = 0;
	for(int i = 1; i < n; i++){
		cout<<arr+i<<" ";
 	}
	return 0;
}