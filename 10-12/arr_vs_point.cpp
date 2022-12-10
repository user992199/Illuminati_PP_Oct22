#include<iostream>
using namespace std;
int main(){
	int a;
	int *aptr = &a;
	int arr[10] = {0,1,2};
	cout<<arr<<endl;
	cout<<arr+1<<endl;
	cout<<&arr+1<<endl;
	cout<<aptr<<endl;
	cout<<&aptr<<endl;
	// arr = aptr;
	return 0;
}