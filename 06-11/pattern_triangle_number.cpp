#include<iostream>
using namespace std;
int main(){
	int i = 1, j = 1, x = 1;
	int n;
	cin>>n;
	while(i<=n){
		j = 1;
		while(j <= i){
			cout<<x<<"\t";
			x = x+1;
			j = j+1;
		}
		cout<<endl;
		i = i+1;
	}
	return 0;
}