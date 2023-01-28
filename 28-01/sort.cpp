#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.push_back(6);
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	sort(v.begin(), v.end(), greater<int>());
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"size: "<<v.size()<<endl;
	v.reserve(4);
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"size: "<<v.size()<<endl;
	v.reserve(9);
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"size: "<<v.size()<<endl;
	return 0;
}