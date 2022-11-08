#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool flag = false;
	// n = 7;
	if(n<=1){
		cout<<"Not Prime\n";
		flag = true;
	}
	int i = 2;
	while(i < n/2 and !flag){ // 2 < 1
		if(n%i == 0){
			cout<<"Not Prime\n";
			flag = true;
			break;
		}
		i = i+1;
	}
	if(!flag){ // 2 == 1 // i == n
		cout<<"Prime\n";
	}
	return 0;
}