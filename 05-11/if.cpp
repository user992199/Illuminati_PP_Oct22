#include<iostream>
using namespace std;
int main(){
	// syntax
	// if(condition check){
	// 		task;
	// }
	int i = 10, j = 0;
	if(i == 0 && j == 0){
		cout<<"both zero\n";
	}
	else if(i == 0 || j == 0){
		if(i == 0){
			cout<<"i is zero\n";
		}else{
			cout<<"j is zero\n";
		}
	}
	else{
		cout<<"Both are not zero\n";
	}



	if(!i){
		cout<<"always true\n";
	}
	cout<<"EOP\n";
	return 0;
}