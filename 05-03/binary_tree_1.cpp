#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left;
	node * right;
	node(): data(-1), left(0), right(0){}
	node(int d): data(d), left(0), right(0){}
};
node * create_bt(){
	int data;
	cin>>data;
	// base case
	if(data == -1) return 0;
	// recursive case
	node * root = new node(data);
	root -> left = create_bt();
	root -> right = create_bt();
	return root;
}
void preorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	cout<<root -> data<<" ";
	preorder(root -> left);
	preorder(root -> right);	
}
void inorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	inorder(root -> left);
	cout<<root -> data<<" ";
	inorder(root -> right);	
}
void postorder(node * root){
	// base case
	if(!root) return;
	// recursive case
	postorder(root -> left);
	postorder(root -> right);	
	cout<<root -> data<<" ";
}
int node_count(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return 1 + node_count(root -> left) + node_count(root -> right);
}
int height_bt(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	return max(height_bt(root -> left), height_bt(root->right)) + 1;
}
int diameter_bt(node * root){
	// base case
	if(!root) return 0;
	// recursive case
	int op1 = height_bt(root -> left) + height_bt(root -> right);
	int op2 = diameter_bt(root -> left);
	int op3 = diameter_bt(root -> right);
	return max(op1, max(op2, op3));
}
class Pair{
public:
	int h, d;
};
Pair diameter_fast_helper(node * root){
	Pair curr;
	// base case
	if(!root){
		curr.h = curr.d = 0;
		return curr;
	}
	// recursive case
	Pair l = diameter_fast_helper(root -> left);
	Pair r = diameter_fast_helper(root -> right);
	curr.h = max(l.h, r.h)+1;
	curr.d = max((l.h+r.h), max(l.d, r.d));
	return curr;
}
int diameter_fast(node * root){
	Pair curr = diameter_fast_helper(root);
	return curr.d;
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
void mirror_bt(node * root){
	// base case
	if(!root) return;
	// recursive case
	swap(root -> left, root -> right);
	mirror_bt(root -> left);
	mirror_bt(root -> right);
}
int main(){
	node * root = create_bt();
	// cout<<"Pre: ";
	// preorder(root);
	// cout<<endl;
	// cout<<"In: ";
	// inorder(root);
	// cout<<endl;
	// cout<<"Post: ";
	// postorder(root);
	// cout<<endl;
	level_order(root);
	mirror_bt(root);
	level_order(root);
	cout<<endl;

	// cout<<"Count: "<<node_count(root)<<endl;
	// cout<<"Height: "<<height_bt(root)<<endl;
	// cout<<"Diameter: "<<diameter_fast(root)<<endl;
	return 0;
}