#include<iostream>
using namespace std;
int main(){
	int og = 10;
	int &sc = og;
	int dc = og;
	og++;
	sc++;
	dc++;
	cout<<og<<endl;
	cout<<sc<<endl;
	cout<<dc<<endl;
	return 0;
}