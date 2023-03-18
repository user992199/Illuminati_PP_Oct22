#include<iostream>
using namespace std;
class node{
public:
	string key;
	int value;
	node * next;
	node(string k, int v):key(k), value(v), next(0){}
};
class hash_map{
	int cs, ts, prm;
	node ** table;
	void reset(){
		cs = 0;
		for(int i = 0; i < ts; i++){
			table[i] = 0;
		}	
	}
	int hash_func(string key){
		int hI = 0;
		int factor = 1;
		for(int i = 0; i < key.size(); i++){
			hI += (key[i] * factor)%ts;
			factor *= prm;
			hI %= ts;
			factor %= ts;
		}
		return hI;
	}
	void rehash(){
		int old_ts = ts;
		node ** old_table = table;
		ts *= 2;
		table = new node * [ts];
		reset();
		for(int i = 0; i < old_ts; i++){
			node * head = old_table[i];
			while(head){
				insert(head -> key, head -> value);
				node * temp = head;
				head = head -> next;
				delete temp;
			}
		}
		delete []old_table;
	}
public:
	hash_map(){
		cs = 0;
		ts = 7;
		table = new node * [ts];
		reset();
		prm = 13;
	}
	void insert(string key, int value){
		node * temp = search(key);
		if(temp) return;
		int hI = hash_func(key);
		temp = new node(key, value);
		temp -> next = table[hI];
		table[hI] = temp;
		cs++;
		if(cs > ts * 0.6){
			rehash();
		}
	}
	void print(){
		cout<<"Table is as follows:\n";
		for(int i = 0; i < ts; i++){
			node * head = table[i];
			cout<<i+1<<"-> ";
			while(head){
				cout<<"("<< head -> key<<" "<<head -> value<<") ";
				head = head -> next;
			}
			cout<<endl;
		}
		cout<<endl;
	}
	node * search(string key){
		int hI = hash_func(key);
		node * head = table[hI];
		while(head){
			if(head -> key == key) return head;
			head = head -> next;
		}
		return head;
	}
	// we are returning the bucket not the value of the bucket
	int& operator[] (string key){
		node * temp = search(key);
		if(!temp){
			int gb;
			insert(key, gb);
			temp = search(key);
		}
		return temp -> value;
	}
};
int main(){
	hash_map h;
	// h.insert("Mango", 100);
	h.insert("Apple", 50);
	h.insert("Banana", 150);
	h.print();
	h.insert("Pineapple", 150);
	h.insert("Watermelon", 150);
	h.insert("Grapes", 150);
	h.insert("Banana", 150);
	h["Mango"] = 188;
	h.print();
	return 0;
}