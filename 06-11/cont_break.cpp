#include<iostream>
using namespace std;
int main(){
	int i = 0;
	while(i<10){
		cout<<i<<" ";
		if(i == 5){
			i = i+1;
			return 0;
			break;
			// continue;
		}
		// if(n%i == 0)
		i = i+1;
	}
	cout<<"\nEOP\n";
	return 0;
}