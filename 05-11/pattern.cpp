#include<iostream>
using namespace std;
int main(){
	int n = 4;
	int i = 1;
	while(i <= n){
		// space
		int j = 1;
		while(j <= n-i){
			cout<<"  ";
			j = j+1;
		}
		j = i;
		while(j < 2*i - 1){
			cout<<j<<" ";
			j = j+1;
		}
		while(j>=i){
			cout<<j<<" ";
			j = j-1;
		}
		cout<<endl;
		i = i + 1;
	}
	return 0;
}