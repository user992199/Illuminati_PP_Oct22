#include<iostream>
using namespace std;
void merge_2_sorted_arr(int a1[], int s, int e){
	int a3[1000000];
	int m = s + (e-s)/2;
	int i = s, j = m+1, k = s;
	while(i <= m and j <= e){
		if(a1[i] < a1[j]){
			a3[k++] = a1[i++];
		}else{
			a3[k++] = a1[j++];
		}
	}
	while(i <= m) a3[k++] = a1[i++];
	while(j <= e) a3[k++] = a1[j++];
	for(int i = s; i <= e; i++){
		a1[i] = a3[i];
	}
}
void merge_sort(int arr[], int s, int e){
	// base case
	if(s==e) return;
	// recursive case
	// DIVIDE
	int m = s + (e-s)/2;
	// SORT
	merge_sort(arr, s, m);
	merge_sort(arr, m+1, e);
	// MERGE
	merge_2_sorted_arr(arr, s, e);
}
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<< " ";
	}cout<<endl;
}
int main(){
	int arr[] = {5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	print(arr, n);
	merge_sort(arr, 0, n-1);
	print(arr, n);
	return 0;
}