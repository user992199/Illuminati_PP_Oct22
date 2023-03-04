#include<iostream>
#include<stack>
using namespace std;
class Queue{
public:
	stack<int> s1, s2;
	void push(int data){
		while(s1.size()){
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(data);
		while(s2.size()){
			s1.push(s2.top());
			s2.pop();
		}
	}
	void pop(){
		s1.pop();
	}
	bool empty(){
		return s1.empty();
	}
	int size(){
		return s1.size();
	}
	int front(){
		return s1.top();
	}

};
int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	return 0;
}