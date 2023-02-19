#include<iostream>
#include<list>
using namespace std;
int main(){
	// syntax 
	// class_identifier <datatype> object_identifier
	list<int> l;
	auto i = 10;
	string h = "hello";
	auto k = h;
	cout<<sizeof(k)<<endl;
	for(auto i = 0; i < 10; i++)
		l.push_back(i);
	for(auto &i : l){
		i+=10;
	}
	cout<<endl;
	for(auto &i : l){
		cout<<++i<<" ";
	}
	cout<<endl;

	for(auto it = l.begin(); it != l.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto it = l.rbegin(); it != l.rend(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	auto it = l.begin();
	for(; *it != 15 and it != l.end(); it++){

	}
	l.erase(it);
	l.erase(it);
	// for(auto it = l.rbegin(); it != l.rend(); it++){
	// 	cout<<*it<<" ";
	// }
	return 0;
}