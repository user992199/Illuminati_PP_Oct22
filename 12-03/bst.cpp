#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node():left(0), right(0){}
	node(int d): data(d), left(0), right(0){}
};
node * insert_bst(node * root, int data){
	// base case
	if(!root){
		root = new node(data);
		return root;
	}
	// recursive case
	if(data >= root -> data){
		root -> right = insert_bst(root -> right, data);
	}else{
		root -> left = insert_bst(root -> left, data);
	}
	return root;
}
node * create_bst(){
	int data;
	cin>>data;
	node * root = 0;
	while(data != -1){
		root = insert_bst(root, data);
		cin>>data;
	}
	return root;
}
void level_order(node * root){
	cout<<"Level Order: \n";
	queue<node *> q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1){
		node * curr = q.front();
		q.pop();
		if(!curr){
			cout<<endl;
			q.push(curr);
			continue;
		}
		if(curr -> left) q.push(curr->left);
		if(curr -> right) q.push(curr->right);
		cout<<curr->data<<" ";
	}
	cout<<endl;
}
bool is_bst(node * root, int mn = INT_MIN, int mx = INT_MAX){
	// base case
	if(!root) return true;
	// recursive case
	if(root -> data >= mn and root -> data <= mx and 
		is_bst(root -> left, mn, root -> data) and
		is_bst(root -> right, root -> data, mx))
		return true;
	return false;
}
class Pair{
public:
	bool balanced;
	int height;
	Pair():height(0), balanced(true){}
	// Pair(int h, bool b):height(h), balanced(b){}
};
Pair is_balanced_helper(node * root){
	// base case
	if(!root){
		Pair nd/*(0, true)*/;
		return nd;
	}
	// recursive case
	// cond1
	Pair l = is_balanced_helper(root -> left);
	// cond2
	Pair r = is_balanced_helper(root -> right);
	// cond3
	int diff = abs(l.height - r.height);
	Pair nd;
	nd.height = max(l.height, r.height) + 1;
	nd.balanced = l.balanced and r.balanced and diff < 2;
	return nd;
}
bool is_balanced(node * root){
	Pair nd = is_balanced_helper(root);
	return nd.balanced;
}
node * search(node * root, int data){
	// base case
	if(!root) return root;
	// recursive case
	if(root -> data == data){
		return root;
	}
	else if(root -> data > data){
		return search(root -> left, data);
	}else{
		return search(root -> right, data);
	}
}
void inorder(node * root, int k1, int k2){
	// base case
	if(!root) return;
	// recursive case
	if(root -> data >= k1)
		inorder(root -> left, k1, k2);
	if(root -> data <= k2 and root -> data >= k1)
		cout<<root -> data<<" ";
	if(root -> data <= k2)
		inorder(root -> right, k1, k2);
}
int main(){
	node * root = create_bst();
	// level_order(root);
	// cout<<search(root, -10)<<endl;
	inorder(root, -100, 100);
	cout<<endl;
	inorder(root, 5, 10);
	cout<<endl;
	// is_bst(root) ? cout<<"True\n" : cout<<"False\n";
	is_balanced(root) ? cout<<"True\n" : cout<<"False\n";
	return 0;
}