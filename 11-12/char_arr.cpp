#include<iostream>
using namespace std;
int main(){
	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"~";
	}
	cout<<arr;
	return 0;
}