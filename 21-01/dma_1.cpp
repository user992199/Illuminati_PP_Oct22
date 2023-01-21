#include<iostream>
using namespace std;
int main(){
	int * a = new int;
	cin>>*a;
	char * ch = new char;
	*ch = '*';
	cout<<*a<<endl;
	cout<<ch<<endl;
	cout<<*ch<<endl;
	
	return 0;
}