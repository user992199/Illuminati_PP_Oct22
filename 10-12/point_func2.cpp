#include<iostream>
using namespace std;
void update_a(int * p){
	*p = -100;
	int &t = *p;
	p = &t;
	cout<<p<<endl;
}
int sum(int *arr, int n){
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum+=arr[i]; // sum += *(arr+i);
	return sum;
}
int main(){
	sum(arr+5, 10);
	int a = 10;
	int * aptr = &a;
	cout<<aptr<<endl;
	update_a(aptr);
	// cout<<*aptr<<endl;
	long long int u = 17;
	cout<<aptr+u<<endl;
	return 0;
}