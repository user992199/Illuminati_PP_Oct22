#include<iostream>
using namespace std;
void merge_2_sorted_arr(int a1[], int m, int a2[], int n){
	int i = 0, j = 0, k = 0;
	int a3[1000];
	while(i < m and j < n){
		if(a1[i] < a2[j]){
			a3[k++] = a1[i++];
		}else{
			a3[k++] = a2[j++];
		}
	}
	while(i<m){
		a3[k++] = a1[i++];
	}
	while(j<n){
		a3[k++] = a2[j++];
	}
	for(int i = 0; i < m+n; i++){
		a1[i] = a3[i];
	}
}
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<< " ";
	}cout<<endl;
}
int main(){
	int a1[100] = {1, 3, 5, 7};
	int a2[100] = {2, 4, 6, 8};
	int m = 4, n = 4;
	print(a1, m);
	print(a2, n);
	merge_2_sorted_arr(a1, m, a2, n);
	print(a1, m+n);
	return 0;
}