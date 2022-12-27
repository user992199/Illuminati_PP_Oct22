#include<iostream>
using namespace std;
int bin_sea(int arr[], int n, int key){
	int s = 0, e = n-1;
	while(s<=e){
		int m = (s+e)/2;
		if(key == arr[m]){
			return m;
		}else if(key < arr[m]){
			e = m-1;
		}else{
			s = m+1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {2, 4, 5, 6, 8, 10, 23, 25, 28};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 28;
	cout<<bin_sea(arr, n, key)<<endl;
	return 0;
}