#include<iostream>
using namespace std;
void update_n(int &a){
	a++;
}
int main(){
	int n = 10;
	update_n(n);
	cout<<n<<endl;
	return 0;
}