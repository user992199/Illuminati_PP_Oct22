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
void helper_mid_1(node * &head, node * &tail){
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
void helper_mid_2(node * &head, node * &tail){
	node * mid = find_middle(head);
	int d;
	cin>>d;
	node * temp = new node(d);
	temp -> next = mid -> next;
	mid -> next = temp;
}
void insert_at_mid(node * &head, node * &tail){
	if(!head) insert_at_begin(head, tail);
	else if(head -> next == NULL) insert_at_end(head, tail);
	else{
		helper_mid_2(head, tail);
	}
}
void insert_at_index(node * &head, node *&tail ,int index){
	if(index == 0){
		insert_at_begin(head, tail);
	}else if(index >= length_ll(head)){
		insert_at_end(head, tail);
	}else{
		node * temp = head;
		for(int i = 0; i < index - 1; i++){
			temp = temp -> next;
		}
		int d;
		cin>>d;
		node * new_node = new node(d);
		new_node -> next = temp -> next;
		temp -> next = new_node;
	}
}
void delete_from_index(node * &head, node * &tail, int index){
	if(index == 0){
		delete_from_begin(head, tail);
	}else if(index >= length_ll(head)){
		delete_from_end(head, tail);
	}else{
		node * prev = head;
		for(int i = 0; i < index - 1; i++){
			prev = prev -> next;
		}
		node * curr = prev -> next;
		// prev -> next = curr -> next;
		prev -> next = prev -> next -> next;
		delete curr;
	}
}
void print_ll(node * head){
	while(head){
		cout<< head->data <<" -> ";
		head = head->next;
	}
	cout<<"NULL\n";
}
void reverse_ll(node * &head, node * &tail){
	node * p = 0;
	node * c = head;
	node * n = head;
	while(c){
		n = n -> next;
		c -> next = p;
		p = c;
		c = n;	
	}
	swap(head, tail);
}
node * search_ll(node * head, int key){
	while(head and head -> data != key){
		head = head -> next;
	}
	return head;
}
node * search_ll_rec(node * head, int key){
	// base case
	if(!head) return head;
	// recursive case
	if(head -> data == key) return head;
	return search_ll_rec(head->next, key);
}

node * kth_last(node * head, int k){
	node * s = head;
	node * f = head;
	k--;
	while(k--){
		f = f -> next;
	}
	while(f->next){
		s = s-> next;
		f = f-> next;
	}
	return s;
}
void bubble_sort(node * & head){
	int len = length_ll(head);
	for(int i = 0; i < len-1; i++){
		node * p = 0;
		node * c = head;
		node * n = c -> next;
		while(n){
			if(c -> data > n -> data){
				// swapping hogi
				if(!p){
					// head swap hoga
					head = head -> next;
					p = head;
				}
				else{
					// head swap nahi hoga
					p -> next = n;
					p = p-> next;
				}
				c -> next = n -> next;
				n -> next = c;
				n = c -> next;
			}else{
				// swapping nahi hogi
				p = c;
				c = n;
				n = n->next;
			}
		}
	}
}
void create_cycle(node *head, node * tail){
	tail -> next = head -> next -> next;
}
node * cycle_detection(node * head){
	node * fast = head;
	node * slow = head;
	while(fast and fast -> next){
		fast = fast -> next -> next;
		slow = slow -> next;
		if(fast == slow){
			return slow;
		}
	}
	return 0;
}
void cycle_break(node * head){
	// node * fast = head;
	// node * slow = head;
	// while(true){
	// 	fast = fast -> next -> next;
	// 	slow = slow -> next;
	// 	if(!fast and !fast -> next){
	// 		return;
	// 	}if(fast == slow){
	// 		break;
	// 	}
	// }
	// node *fast = cycle_detection(head);
	// node * prev = head;
	// while(prev->next != fast){
	// 	prev = prev -> next;
	// }
	// node *slow = head;
	node * fast = cycle_detection(head);
	node * slow = head -> next;
	while(slow != fast->next){
		slow = slow -> next;
		fast = fast -> next;
		// prev = prev -> next;
	}
	fast -> next = 0;
}
int main(){
	node * head = 0, *tail = 0;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		insert_at_end(head, tail);
	}
	print_ll(head);
	cout<<"before: "<<cycle_detection(head)<<endl;
	create_cycle(head, tail);
	cout<<"after: "<<cycle_detection(head)<<endl;
	// print_ll(head);
	cycle_break(head);
	cout<<"after after: "<<cycle_detection(head)<<endl;
	print_ll(head);
	// cout<<kth_last(head, k)->data<<endl;
	return 0;
}