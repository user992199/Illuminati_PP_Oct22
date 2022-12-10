#include<iostream>
using namespace std;
int main(){
	int a = 10;
	float f = 10;
	double d = 10;
	bool b = 10;
	cout<<sizeof(a)<<endl;
	cout<<sizeof(b)<<endl;
	cout<<sizeof(d)<<endl;
	cout<<sizeof(f)<<endl;
	cout<<endl;
	cout<<sizeof(&a)<<endl;
	cout<<sizeof(&b)<<endl;
	cout<<sizeof(&d)<<endl;
	cout<<sizeof(&f)<<endl;
	return 0;
}