#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
void push_bottom(stack<int> & s, int t){
	// base case
	if(s.empty()){
		s.push(t);
		return;
	}
	// recursive case
	int ct = s.top();
	s.pop();
	push_bottom(s, t);
	s.push(ct);
}
void reverse_stack(stack<int> &s){
	// base case
	if(s.empty()) return;
	// recursive case
	int t = s.top();
	s.pop();
	reverse_stack(s);
	push_bottom(s, t);
}
int main(){
	stack <int> s;
	for(int i = 1; i <= 5; i++){
		s.push(i);
	}
	print(s);
	reverse_stack(s);
	print(s);
	return 0;
}