#include<iostream>
using namespace std;
void update_n(int &a){
	a++;
}
int main(){
	int n = 10;
	int &n2 = n;
	int &n3 = n2;
	n2 = 15;
	cout<<n<<endl;
	n3++;
	cout<<n<<endl;
	return 0;
}