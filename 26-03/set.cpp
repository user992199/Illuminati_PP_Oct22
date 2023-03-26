#include<iostream>
#include<set>
#include<utility>
#include<cstring>
using namespace std;
int main(){
	set<pair<string, int> > s;
	s.insert(make_pair("Apple", 1));
	s.insert(make_pair("Banana", 2));
	s.insert(make_pair("AApple", 3));
	s.insert(make_pair("Pineapple", 4));
	s.insert(make_pair("Grapes", 5));
	auto add = s.find(make_pair("AApple", 3));
	if(add != s.end()){
		s.erase(add);
		s.insert(make_pair("Apple", 1));
	}
	for(auto a: s){
		cout<<a.first<<" "<<a.second<<endl;
	}cout<<endl;
	return 0;
}