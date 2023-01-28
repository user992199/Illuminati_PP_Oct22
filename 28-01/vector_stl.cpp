#include<iostream>
#include<vector>
using namespace std;
int main(){
	// syntax
	// vector<datatype> identifier;
	// vector<int> v({1, 2, 3, 4, 5});
	vector<int> v1;
	// vector<int> v(5, 10);
	// vector<int> v;
	// cout<<v[0]<<endl;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout<<"v1 capacity: "<<v1.capacity()<<endl;
	cout<<"v1 size: "<<v1.size()<<endl;
	vector<int> v2(v1);
	v2.push_back(19);
	cout<<"v2 capacity: "<<v2.capacity()<<endl;
	cout<<"v2 size: "<<v2.size()<<endl;
	v2.pop_back();
	v2.pop_back();
	v2.pop_back();
	v2.pop_back();
	cout<<"v2 capacity: "<<v2.capacity()<<endl;
	cout<<"v2 size: "<<v2.size()<<endl;
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	// cout<<"capacity: "<<v.capacity()<<endl;
	// for(int i = 0; i < v.size(); i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;
	// cout<<v.size()<<endl;
	return 0;
}