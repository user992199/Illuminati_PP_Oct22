#include<iostream>
using namespace std;
class c{
public:
	const int a1;
	int a2;
	static int count;
	c():a1(1), a2(1){
		count++;
	}
	c(int b1, int b2):a1(b1), a2(b2){
		count++;
	}
};
int c::count = 0;
int main(){
	c o1;
	c o2(2, 2);
	c o3(3, 3);
	c o4(4, 4);
	c::count++;
	cout<<o1.count<<endl;
	cout<<o2.count<<endl;
	cout<<o3.count<<endl;
	cout<<o4.count<<endl;
	return 0;
}