#include<iostream>
using namespace std;
bool check_7(int arr[], int n){
	// base case
	if(n==0) return false;
	// recursive case
	if(arr[n-1] == 7){
		return true;
	}
	return check_7(arr, n-1);
}
int last_7(int arr[], int n){
	// base case
	if(n==0) return -1;
	// recursive case
	if(arr[n-1] == 7){
		return n-1;
	}
	return last_7(arr, n-1);
}
int first_7(int arr[], int n, int i = 0){
	// base case
	if(n==i) return -1;
	// recursive case
	if(arr[i] == 7){
		return i;
	}
	return first_7(arr, n, i+1);
}
void print_all_7(int arr[], int n, int i = 0){
	// base case
	if(n==i) return;
	// recursive case
	if(arr[i] == 7){
		cout<<i<<" ";
	}
	print_all_7(arr, n, i+1);
}
int main(){
	int arr[] = {1, 2, 3, 5, 7, 8, 9, 10, 7, 7, 18, 7};
	int arr2[] = {1, 2, 3, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	if(check_7(arr, n)){
		cout<<"first: "<<first_7(arr, n)<<endl;
		cout<<"last: "<<last_7(arr, n)<<endl;
		cout<<"Every index on which 7 exists: "; 
		print_all_7(arr, n);
		cout<<endl;
	}else{
		cout<<"No 7\n";
	}
	cout<<"**********ARRAY 2**************\n";
	cout<<"first: "<<first_7(arr2, n2)<<endl;
	cout<<"last: "<<last_7(arr2, n2)<<endl;
	print_all_7(arr2, n2);
	return 0;
}