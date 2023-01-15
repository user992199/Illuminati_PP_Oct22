#include<iostream>
using namespace std;
int main(){
	// arr[i][j]
	// arr[i]
	// arr
	// &arr
	int arr[] = {0, 1, 2, 3, 4};
	cout<<&arr<<endl;
	cout<<&arr+1<<endl;
	return 0;
}