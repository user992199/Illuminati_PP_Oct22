#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.reserve(10);
	for(int i = 0; i < 5; i++){
		v[i] = i+1;
	}
	cout<<v.size()<<endl;
	v[5] = 13;
	v.push_back(10);
	v.push_back(12);
	v.pop_back();
	cout<<v.size()<<endl;
	v.push_back(20);
	for(int i = 0; i < 20; i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}