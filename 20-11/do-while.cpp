#include<iostream>
using namespace std;
int main(){
	int i = 0;
	while(i<0){
		cout<<i<<endl;
		i++;
	}
	do{
		cout<<i<<endl;
		i++;
	}while(i<0);
	
	return 0;
}