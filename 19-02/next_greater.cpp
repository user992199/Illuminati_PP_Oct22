#include<iostream>
#include<stack>
using namespace std;
void print(int * arr, int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<< " ";
	}cout<<endl;
}
void next_greater(int * arr, int * ng, int n){
	stack<int> s;
	for(int i = 0; i < n; i++){			
		while(!s.empty() and arr[s.top()] < arr[i]){
			ng[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	while(!s.empty()){
		ng[s.top()] = -1;
		s.pop();
	}
}
int main(){
	int arr[] = {5, 4, 2, 7, 3, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int * ng = new int[n];
	next_greater(arr, ng, n);
	print(arr, n);
	print(ng, n);
	return 0;
}