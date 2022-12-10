#include<iostream>
using namespace std;
int main(){
	double a1 = 100;
	double *aptr1 = &a1;
	double a2 = 100;
	double *aptr2 = &a2;
	cout<<aptr1<<endl;
	cout<<aptr2<<endl;
	cout<<aptr2-aptr1<<endl;
	return 0;
}