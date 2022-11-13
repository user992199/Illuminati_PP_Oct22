#include<iostream>
using namespace std;
int main(){
	int i = 0;
	for(;i < 10; i++){
		if(i < 10){
			cout<<i<<" ";
			i = i+1;
		}else{
			break;
		}
	}cout<<endl;
	cout<<i<<endl;
	i = i + 1;
	i += 8;
	i++;
	i--;
	return 0;
}