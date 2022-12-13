#include<iostream>
using namespace std;
int main(){
	// char ch = "sad";
	char arr[100] = "abcdef";
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"n:- "<<n<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"~";
	}
	cout<<arr;
	return 0;
}