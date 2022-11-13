#include<iostream>
using namespace std;

int i = 10;

int main(){
	int i = 0;
	cout<<i<<endl;
	{
		int i = 100;
		cout<<i<<endl;
		cout<<::i<<endl;
	}
	cout<<i<<endl;	
	cout<<::i<<endl;
	// if()
	return 0;
}