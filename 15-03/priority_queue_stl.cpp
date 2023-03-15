#include<iostream>
#include<queue>
using namespace std;
class comparator{
public:
	bool operator()(int a, int b){
		return a > b;
	}
};
int main(){
	priority_queue<int, vector<int>, comparator > min_h; // Min Heap
	// priority_queue<int, vector<int>, greater<int> > min_h; // Min Heap
	priority_queue<int> max_h; // Max Heap
	int arr[] = {8, 12, 4, 543, 23, 35, 1, 1, 4, 6, 3, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		min_h.push(arr[i]);
		max_h.push(arr[i]);
	}
	while(!min_h.empty()){
		cout<<min_h.top()<<" ";
		min_h.pop();
	}
	cout<<endl;
	while(!max_h.empty()){
		cout<<max_h.top()<<" ";
		max_h.pop();
	}
	cout<<endl;
	return 0;
}