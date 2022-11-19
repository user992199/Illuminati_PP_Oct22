#include<iostream>
using namespace std;
int main(){
	int i = 0;
	while(i < 10){
		if(i == 5){
			i++;
			continue;
		}
		cout<<i<<endl;
		i++;
	}
	for(int i = 0; i < 10; i++){ // i = 0
		if(i = 0){ // i = 0
			continue;
		}
		cout<<i<<" "; // i = 0
		i++; // i = 1
	}cout<<'\n';
	return 0;
}