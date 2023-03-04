#include<iostream>
#include<queue>
using namespace std;
class Stack{
public:
	queue<int> q1;
	queue<int> q2;
	void push(int data){
		if(q2.size()){
			q2.push(data);
		}else{
			q1.push(data);
		}
	}
	void pop(){
		if(q1.size()){
			while(q1.size() > 1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}else if(q2.size()){
			while(q2.size() > 1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
	}
	int top(){
		if(q1.size()){
			while(q1.size() > 1){
				q2.push(q1.front());
				q1.pop();
			}
			int x = q1.front();
			q1.pop();
			q2.push(x);
			return x;
		}else if(q2.size()){
			while(q2.size() > 1){
				q1.push(q2.front());
				q2.pop();
			}
			int x = q2.front();
			q2.pop();
			q1.push(x);
			return x;
		}
		return -1;
	}
	bool empty(){
		return q1.empty() and q2.empty();
	}
	int size(){
		return max(q1.size(), q2.size());
	}
};
int main(){
	Stack s;
	int n = 6;
	cout<<s.empty()<<endl;
	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
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