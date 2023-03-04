#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node():next(0){}
	node(int d): data(d), next(0){}
};
class Queue{
	node* head,* tail;
public:
	int s;
	Queue(): head(0), tail(0), s(0){}
	// inserting an element at the end
	void push(int data){
		if(!head){
			head = tail = new node(data);
		}else{
			tail -> next = new node(data);
			tail = tail -> next;
		}
		s++;
	}
	// deleting an element from the start
	void pop(){
		if(s){ // if(head) also works
			node * temp = head;
			head = head -> next;
			if(!head) tail = 0;
			delete temp;
			s--;
		}
	}
	int size(){
		return s;
	}
	bool empty(){
		return head == 0;
	}
	int front(){
		return head ? head -> data : -1;
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