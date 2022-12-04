#include<iostream>
using namespace std;
int max_arr(int arr[], int n){
	int mini = 0;
	for(int i = 1; i < n; i++){
		if(arr[i] > arr[mini])
			mini = i;
	}
	return mini;
}
int mode(int arr[], int n){
	int freq[1001] = {0};
	for(int i = 0; i < n ; i++){
		freq[arr[i]]++;
	}
	return max_arr(freq, 1001);
}
int main(){
	int arr[] = {1, 3, 5, 21, 3, 4, 0,3 ,5 , 6, 4, 4, 4, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<mode(arr, n)<<endl;
	return 0;
}