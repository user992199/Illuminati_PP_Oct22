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

node* find_middle(node * head){
	node * fast = head;
	node * slow = head;
	// while(fast != NULL and fast -> next != NULL){
	while(fast -> next != NULL and fast -> next -> next != NULL){
		slow = slow -> next;
		fast = fast -> next -> next;
	}
	return slow;
}
void print_ll(node * head){
	while(head){
		cout<< head->data <<" -> ";
		head = head->next;
	}
	cout<<"NULL\n";
}

void merge_2_sorted_ll(node * &h1, node * &h2){
	node * t1 = h1;
	node * t2 = h2;
	node * c = 0;
	if(t1 -> data < t2 -> data){
		c = t1;
		t1 = t1 -> next;
		h2 = h1;
	}else{
		c = t2;
		t2 = t2 -> next;
		h1 = h2;
	}
	while(t1 and t2){
		if(t1 -> data < t2 -> data){
			c -> next = t1;
			t1 = t1 -> next;
		}else{
			c -> next = t2;
			t2 = t2 -> next;
		}
		c = c -> next;
	}
	if(t1) c -> next = t1;
	if(t2) c-> next = t2;
}
void merge_sort(node * &head){
	// base case
	if(head->next == NULL) return;
	// recursive case
	// divide
	node * mid = find_middle(head);
	node * h2 = mid -> next;
	mid -> next = NULL;
	// sort
	merge_sort(head);
	merge_sort(h2);
	// merge
	merge_2_sorted_ll(head, h2);
}
int main(){
	node * head = 0, *tail = 0;
	int n;
	cin>>n;
	while(n--){
		insert_at_end(head, tail);
	}
	print_ll(head);
	merge_sort(head);
	print_ll(head);
	return 0;
}