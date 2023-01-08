#include<iostream>
using namespace std;
void print_all_permutations(char arr[], int n, int j){
	// base case
	if(arr[j] == '\0'){
		cout<<arr<<endl;
		return;
	}
	// recursive case
	for(int i = j; i < n; i++){
		swap(arr[i], arr[j]);
		print_all_permutations(arr, n, j+1);
		// backtracking
		swap(arr[i], arr[j]);
	}
}
int main(){
	char arr[] = "abc";
	int n = sizeof(arr)/sizeof(arr[0]);
	// cout<<arr<<endl;
	print_all_permutations(arr, n-1, 0);
	// cout<<arr<<endl;
	return 0;
}