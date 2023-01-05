#include<iostream>
using namespace std;
int bsr(int arr[], int s, int e, int key){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = (s+e)/2;
	if(arr[m] == key) return m;
	else if(arr[m] > key){
		return bsr(arr, s, m-1, key);
	}else{
		return bsr(arr, m+1, e, key);
	}
}
int main(){
	int arr[] = {1, 4, 5, 7, 9, 10, 11, 14, 17};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = -17;
	cout<<bsr(arr, 0, n-1, key)<<endl;
	return 0;
}