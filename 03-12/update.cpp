#include<iostream>
using namespace std;
int update_n(int n){
	n++;
	cout<<n<<endl; // 11
	return n;
}
int main(){
	int n = 10;
	update_n(n);
	cout<<n<<endl;
	return 0;
}