#include<iostream>
using namespace std;
int main(){
	int init, fval, step, cel;
	cin>>init>>fval>>step;
	while(init <= fval){
		cel = (5.0/9)*(init - 32);
		cout<<init<<" "<<cel<<endl;
		init = init + step;
	}
	return 0;
}