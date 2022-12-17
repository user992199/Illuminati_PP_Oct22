#include<iostream>
#include<cmath>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i];
	}cout<<endl;
}
int no_of_digits(int n){
	int i = 0;
	while(n){
		n /= 10;
		i++;
	}
	return i;
}
bool compare(int a, int b){
	int ab = a*pow(10, no_of_digits(b)) + b;
	int ba = b*pow(10, no_of_digits(a)) + a;
	return ab>ba;
}
int main(){
	// int n;
	// cin>>n;
	// int arr[n];
	int arr[] = {9, 98, 6, 67};
	int n = sizeof(arr)/sizeof(arr[0]);
	// for(int i = 0; i < n; i++){
	// 	cin>>arr[i];
	// }
	// sort(arr, arr+n, greater<int>());
	sort(arr, arr+n, compare);
	print(arr, n);
	return 0;
}