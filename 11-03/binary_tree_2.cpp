#include<iostream>
#include<queue>
using namespace std;
class node{
public:
	int data;
	node * left, * right;
	node():left(0), right(0){}
	node(int d):left(0), right(0), data(d){}
};
node* create_levelwise(){
	// cout<<"Enter Root Node: ";
	int d;
	cin>>d;
	node * root = new node(d);
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node * curr = q.front();
		q.pop();
		// cout<<"Enter the children of "<<curr->data<<":\n";
		int l, r;
		cin>>l>>r;
		if(l != -1){
			curr->left = new node(l);
			q.push(curr->left);
		}
		if(r != -1){
			curr->right = new node(r);
			q.push(curr->right);
		}
	}
	return root;
}
void level_order_traversal(node * root){
	queue<node*> q;
	q.push(root);
	q.push(0);
	while(q.size()>1){
		node * curr = q.front();
		q.pop();
		if(!curr){
			cout<<endl;
			q.push(0);
			continue;
		}
		if(curr->left){
			q.push(curr->left);
		}
		if(curr->right){
			q.push(curr->right);
		}
		cout<<curr->data<<" ";
	}
	cout<<endl;
}
void right_view_helper(node * root, int cl, int &ml){
	// base case
	if(!root) return;
	// recursive case
	if(cl > ml){
		cout<<root -> data<<"\n";
		ml = cl;
	}
	right_view_helper(root->right, cl+1, ml);
	right_view_helper(root->left, cl+1, ml);
}
void right_view(node * root){
	int cl = 0, ml = -1;
	right_view_helper(root, cl, ml);
}

bool top_view_helper(node * root, int target, int cl){
	if(!root) return false;
	if(target == cl){
		cout<<root -> data<<" ";
		return true;
	}
	if(target < 0){
		if(top_view_helper(root -> left, target, cl-1)) return true;
		return top_view_helper(root -> right, target, cl+1);
	}else{
		if(top_view_helper(root -> right, target, cl+1)) return true;
		return top_view_helper(root -> left, target, cl-1);
	}
	return false;
}
void find_extremes(node * root, int &mr, int &ml, int cl){
	if(!root) return;
	if(cl < ml){
		ml = cl;
	}
	if(cl > mr){
		mr = cl;
	}
	find_extremes(root -> left, mr, ml, cl-1);
	find_extremes(root -> right, mr, ml, cl+1);
}
void top_view(node * root){
	int mr = INT_MIN, ml = INT_MAX;
	find_extremes(root, mr, ml, 0);
	for(; ml <= mr; ml++){
		top_view_helper(root, ml, 0);
	}
	cout<<endl;
}
void print_at_level_k(node * root, int cl, int k){
	// base case
	if(!root) return;
	if(cl > k) return;
	if(cl == k){
		cout<<root -> data<<" ";
		return;
	}
	print_at_level_k(root -> left, cl+1, k);
	print_at_level_k(root -> right, cl+1, k);
}
int print_dist_k(node * root, int target, int k){
	if(!root) return -1;
	if(root -> data == target){
		print_at_level_k(root, 0, k);
		return 0;
	}
	int d = print_dist_k(root -> left, target, k);
	if(d >= 0){
		if(d + 1 == k){
			cout<<root -> data<<" ";
		}else{
			print_at_level_k(root -> right, 0, k - d - 2);
		}
		return d+1;
	}else{
		d = print_dist_k(root -> right, target, k);
		if(d >= 0){
			if(d + 1 == k){
				cout<<root -> data<<" ";
			}else{ // k = 2, dr = 2
				print_at_level_k(root -> left, 0, k - d - 2);
			}
			return d+1;
		}
		return -1;
	}

}
int main(){
	node * root = create_levelwise();
	// level_order_traversal(root);
	// top_view(root);
	print_dist_k(root, 6, 3);
	return 0;
}