#include<iostream>
#include<vector>
using namespace std;
vector<int> update(vector<int> &v){
	for(int i = 0; i < v.size(); i++){
		v[i]++;
	}
	return v;
}
int main(){
	vector<int> v(10, 10);
	int r = 5;
	int c = 3;
	vector<vector<int> > v2d(r, vector<int> (c));
	for(int i = 0; i < v2d.size(); i++){
		for(int j = 0; j < v2d[i].size(); j++){
			cout<<v2d[i][j]<<" ";
		}cout<<endl;
	}
	v = update(v);
	cout<<v[0]<<endl;
	return 0;
}