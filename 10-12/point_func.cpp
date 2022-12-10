#include<iostream>
using namespace std;
void update_a(int * p, int a1[], int n){
	*p = 100;
	int k = 10;
	p = &k;
	// *arr+i == arr[i]
	for(int i = 0;i < n; i++){
		cout<<a1[i]<<endl;
	}
}
int main(){
	int a = 10;
	int arr[] = {1, 2, 3, 4};
	int * aptr = &a;
	cout<<aptr[0]<<endl;
	update_a(aptr, arr, 4);
	// cout<<a<<endl;
	return 0;
}