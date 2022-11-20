#include<iostream>
using namespace std;
void print_table(int i, int f, int s){
	// cout<<i<<" "<<f<<" "<<s<<endl;
	for(; i <= f; i+=s){
		int c = 5.0*(i-32)/9;
		cout<<i<<" "<<c<<endl;
	}
}
int main(){
	int i = 0, f = 300, s = 20;
	print_table(i, f, s);
	return 0;
}