#include<iostream>
using namespace std;
template <typename T1>
class node{
public:
	T1 data;
	node <T1> * next;
	node(T1 data){
		this->data = data;
		next = NULL;
	}
};
template <typename T2>
class Stack{
	node<T2> * head;
public:
	Stack(){
		head = 0;
	}
	// push
	void push(T2 data){
		node<T2> * temp = new node<T2> (data);
		temp -> next = head;
		head = temp;
	}
	// pop 
	void pop(){
		if(!head) return;
		node<T2> * temp = head;
		head = head -> next;
		delete temp;
	}
	// top
	T2 top(){
		return head ? head -> data: -1; 

	}
	// empty
	bool empty(){
		return head == 0;
	}
};
int main(){
	Stack<int> s;
	for(int i = 0; i < 10; i++){
		s.push(i);
	}
	for(int i = 0; !s.empty(); i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}