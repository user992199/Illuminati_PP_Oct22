#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	int n;
	cin>>n;
	while(n--){
		int t;
		cin>>t;
		v.push_back(t);
	}
	for(int i = 0; i < v.size()/2; i++){
		swap(v[i], v[v.size() - 1 - i]);
	}
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}