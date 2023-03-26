#include<iostream>
using namespace std;
class node{
public:
	int number;
	node * left; // 0
	node * right; // 1
	node(int n = -1):number(n), left(0), right(0){}
};
class Trie{
	node * root;
public:
	Trie(){
		root = new node(-1);
	}
	void insert(int n){
		node * cn = root;
		for(int i = 31; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){
				if(cn -> right == 0)
					cn -> right = new node();
				cn = cn -> right;
			}else{
				if(cn -> left == 0)
					cn -> left = new node();
				cn = cn -> left;
			}
		}
		cn -> number = n;
	}
	int max_xor_helper(int n){
		node * cn = root;
		int bit = n & (1 << 31);
		if(bit){
			if(cn -> right) cn = cn -> right;
			else cn = cn -> left;
		}else{
			if(cn -> left) cn = cn -> left;
			else cn = cn -> right;
		}
		for(int i = 30; i >= 0; i--){
			int bit = n & (1 << i);
			if(bit){
				if(cn -> left) cn = cn -> left;
				else cn = cn -> right;
			}else{
				if(cn -> right) cn = cn -> right;
				else cn = cn -> left;
			}
		}
		return n ^ (cn -> number);
	}
	int max_xor(int * arr, int n){
		int ans = INT_MIN;
		insert(arr[0]);
		for(int i = 1; i < n; i++){
			insert(arr[i]);
			ans = max(ans, max_xor_helper(arr[i]));
		}
		return ans;
	}
};
int main(){
	int arr[] = {-1, 1, 2, 4, 7, 8, 10, -2};
	int n = sizeof(arr)/sizeof(arr[0]);
	Trie t;
	cout<<t.max_xor(arr, n)<<endl;
	return 0;
}