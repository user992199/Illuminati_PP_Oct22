#include<iostream>
using namespace std;
int main(){
	int radius = 10;
	int *rptr = 0;
	// cout<<rptr<<endl;
	// 1000~ line
	rptr = &radius;
	// 1000~ line
	cout<<2*3.14**rptr<<endl;
	return 0;
}