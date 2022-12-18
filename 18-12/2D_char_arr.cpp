#include<iostream>
using namespace std;
int main(){
	char arr[][4] = {
		{'a', 'b', 'c', 'd'},
		"cde",
		"efg"
	};
	cout<<&arr<<endl;
	cout<<arr<<endl;
	cout<<arr[0]<<endl;
	return 0;
}