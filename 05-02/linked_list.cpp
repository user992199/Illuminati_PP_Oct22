#include<iostream>
using namespace std;
class node{
public:
	int data;
	node * next;
	node(){
		next = 0;
	}
	node(int d):data(d), next(0){}
};
void insert_at_begin(node * &head, node * &tail){
	int d;
	cin>>d;
	node * temp = new node(d);
	temp->next = head;
	head = temp;
	if(!tail) tail = head;
}
void insert_at_end(node * & head, node * & tail){
	int d;
	cin>>d;
	if(tail){
		tail -> next = new node(d);
		tail = tail -> next;
	}else{
		head = tail = new node(d);
	}
}
void delete_from_begin(node * &head, node * &tail){
	if(head == NULL) return;
	else if(head -> next == NULL){
		delete head;
		head = tail = 0;
	}else{
		node * t = head;
		head = head -> next;
		delete t;
	}
}
void delete_from_end(node * & head, node * & tail){
	if(head == NULL) return;
	else if(head -> next == NULL){
		delete head;
		head = tail = 0;
	}else{
		node * t = head;
		while(t -> next != tail){
			t = t-> next;
		}
		delete tail;
		tail = t;
		tail -> next = 0;
	}
}
int length_ll(node * head){
	int c = 0;
	while(head){
		head = head -> next;
		c++;
	}
	return c;
}
void insert_at_mid(node * &head, node * &tail){
	if(!head) insert_at_begin(head, tail);
	else if(head -> next == NULL) insert_at_end(head, tail);
	else{
		int length = length_ll(head);
		int m = (length - 1)/2;
		node * mid = head;
		for(int i = 0; i < m; i++){
			mid = mid->next;
		}
		int d;
		cin>>d;
		node * temp = new node(d);
		temp -> next = mid -> next;
		mid -> next = temp;
	}
}
void print_ll(node * head){
	while(head){
		cout<< head->data <<" -> ";
		head = head->next;
	}
	cout<<"NULL\n";
}
int main(){
	node * head = 0, *tail = 0;
	for(int i = 0; i < 5; i++){
		insert_at_mid(head, tail);
		print_ll(head);
	}
	return 0;
}