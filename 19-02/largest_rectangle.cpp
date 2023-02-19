#include<iostream>
#include<stack>
using namespace std;
int lar_rec(int *arr, int n){
	int * ps, * ns, ma = 0;
	stack<int> s;
	ps = new int[n];
	ns = new int[n];
	for(int i = 0; i < n; i++){
		while(!s.empty() and arr[i] < arr[s.top()]){
			s.pop();
		}
		s.empty() ? ps[i] = -1 : ps[i] = s.top();
		s.push(i);
	}
	while(!s.empty()) s.pop();
	for(int i = 0; i < n; i++){
		while(!s.empty() and arr[s.top()] > arr[i]){
			ns[s.top()] = i;
			s.pop();
		}
		s.push(i);
	}
	while(!s.empty()){
		ns[s.top()] = n;
		s.pop();
	}
	for(int i = 0; i < n; i++){
		ma = max(ma, arr[i] * (ns[i] - ps[i] - 1));
	}
	return ma;
}
int main(){
	int arr[] = {2, 1, 5, 6, 2, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<lar_rec(arr, n)<<endl;
	return 0;
}