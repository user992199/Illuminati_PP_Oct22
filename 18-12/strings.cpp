#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string s1;
	s1 = "Hello \0 world";
	cout<<s1<<endl;
	cout<<s1.size()<<endl;
	cout<<s1.length()<<endl;
	s1.push_back('k');
	s1.pop_back();
	s1 = "Wo\0rld " + s1;
	s1 += " Jok\0er";
	s1.append(" Bo\0ok");
	string s2 = s1.substr(3, 100);
	// cout<<s1[100]<<endl;
	cout<<"s2:- "<<s2<<endl;
	cout<<s1.size()<<endl;
	return 0;
}