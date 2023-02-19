#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	v.reserve(100);
	for(int i = 1; i <= 10; i++)
		v.push_back(i+1);
	v.pop_back();
	// for(int i = 0; i < v.size(); i++){
	// 	v[i]
	// }
	for(int &i: v){
		i += 10;
		cout<<i<<" ";
	}cout<<endl;
	for(int i: v){
		cout<<i<<" ";
	}cout<<endl;
	return 0;
}