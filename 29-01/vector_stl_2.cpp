#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<vector<int> > v;

	v.reserve(10);
	v[0].push_back(10);
	cout<<v.size()<<endl;
	vector<int> v1;
	v1.push_back(77);
	v.push_back(v1);
	v1[0] = 55;
	v1.push_back(30);
	v.push_back(v1);
	cout<<"________\n";
	cout<<v1.size()<<endl;
	cout<<v[0].size()<<endl;
	v[0][1] = 146;
	v[0] = v1;
	v1.pop_back();
	v.push_back(v1);

	cout<<"v1[0]: "<<v1[0]<<endl;
	cout<<"v1[1]: "<<v1[1]<<endl;
	cout<<"v[0][0]: "<<v[0][0]<<endl;
	cout<<"v[0][1]: "<<v[0][1]<<endl;
	cout<<"v[1][0]: "<<v[1][0]<<endl;
	cout<<"v[1][1]: "<<v[1][1]<<endl;
	cout<<"v[2][0]: "<<v[2][0]<<endl;
	cout<<"v[2][1]: "<<v[2][1]<<endl;
	return 0;
}