#include<iostream>
#include<vector>
using namespace std;
class heap{
	vector<int> v;
	void heapify(int i){
		int l = i * 2, r = i * 2 + 1;
		int mi = i;
		if(l < v.size() and v[mi], v[l]){
			mi = l;
		}
		if(r < v.size() and v[mi] > v[r]){
			mi = r;
		}
		if(mi == i) return;
		else{
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}
public:
	heap(){
		v.push_back(-1);
	}
	void push(int data){
		v.push_back(data);
		int c = v.size() - 1;
		int p = c/2;
		while(p > 0 and v[c] < v[p]){ // c > 0, v[c] < v[p]
			swap(v[c], v[p]); // c = 2, p = 1
			c = p; // c = 1
			p = c/2; // p = 1
		}
	}
	void pop(){
		if(v.size() > 1){
			swap(v[1], v[v.size() - 1]);
			v.pop_back();
			heapify(1);
		}
	}
	int size(){
		return v.size()-1;
	}
	int top(){
		return v[1];
	}
	bool empty(){
		return v.size() <= 1;
	}
};
int main(){
	heap h;
	h.push(100);
	h.push(1);
	h.push(25);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(2);
	h.push(7);
	h.push(36);
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
	cout<<endl;
	return 0;
}