#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s;
	int n;
	cin>>s;
	getline(cin, s);
	cin>>n;
	cout<<s<<endl;
	s = s.substr(s.size() - n) + s.substr(0, s.size() - n);
	cout<<s<<endl;
	return 0;
}