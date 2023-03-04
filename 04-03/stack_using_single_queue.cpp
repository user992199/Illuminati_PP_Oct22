#include<iostream>
#include<queue>
using namespace std;
class Stack{
public:
	queue<int> q;
	void reverse_q(){
		// base case
		if(q.empty()) return;
		// recursive case
		int front = q.front();
		q.pop();
		reverse_q();
		q.push(front);
	}
	void push(int data){
		reverse_q();
		q.push(data);
		reverse_q();
	}
	void pop(){
		q.pop();
	}
	int top(){
		return q.front();
	}
	bool empty(){
		return q.empty();
	}
	int size(){
		return q.size();
	}
};
int main(){
	Stack s;
	int n = 6;
	while(--n){
		cout<<n<<" ";
		s.push(n);
	}cout<<endl;
	while(s.size()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}