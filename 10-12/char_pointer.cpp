#include<iostream>
using namespace std;
int main(){
	char arr[] = {'a', 'b', 'c', '\0', 'd'};
	cout<<arr<<endl;
	cout<<arr<<endl;
	char ch = 'A';
	char *xch = &ch;
	cout<<&ch<<endl;
	cout<<xch<<endl;
	char ch1 = 'k';
	cout<<&ch1<<endl; 
	cout<<sizeof(*arr)<<endl;
	return 0;
}