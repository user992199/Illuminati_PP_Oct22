#include<iostream>
using namespace std;
int main(){
	// int arr[3][5];
	int arr[10][5] = {0};
	cout<<sizeof(arr)<<endl;
	int no_r = sizeof(arr) / sizeof(arr[0]);
	int no_c = sizeof(arr[0]) / sizeof(arr[0][0]);
	for(int row = 0; row < no_r; row++){
		for(int col = 0; col < no_c; col++){
			cout<<arr[row][col]<<" ";
		}cout<<endl;
	}
	cout<<&arr<<endl; // pointer of a matrix/2d arr // matrix ka address
	cout<<&arr+1<<endl;
	cout<<arr<<endl; // pointer of a row // row ka address
	cout<<arr+1<<endl;
	cout<<arr[0]<<endl; // pointer of a single bucket // single bucket ka address
	cout<<arr[0]+1<<endl;
	cout<<arr[0][0]<<endl; // value of a single bucket // single bucket ki value
	cout<<arr[0][0] + 1<<endl;
	return 0;
}