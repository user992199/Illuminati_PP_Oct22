#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;
class node{
public:
	char ch;
	unordered_map< char, node *> h;
	bool is_word_ending;
	node(char k, bool iwe = false): ch(k), is_word_ending(iwe){}
};
class Trie{
	node * root;
public:
	Trie(){
		root = new node('\0');
	}
	void add_word(string word){
		node * cn = root; // cn is current node
		for(int i = 0; i < word.size(); i++){
			if(cn -> h.count(word[i]) == 0){
				node * temp = new node(word[i]);
				cn -> h[word[i]] = temp; // cn -> children[word[i]] = temp;
			}
			cn = cn -> h[word[i]];
		}
		cn -> is_word_ending = true;
	}
	bool search(string word){
		node * cn = root; // cn is current node
		for(int i = 0; i < word.size(); i++){
			if(cn -> h.count(word[i]) == 0){
				return false;
			}
			cn = cn -> h[word[i]];
		}
		return cn -> is_word_ending;
	}
	void add_multiple_words(){
		string input;
		cin>>input;
		while(input != "$END$"){
			add_word(input);
			cin>>input;
		}
	}
	void search_loop(){
		string input;
		cout<<"Word Search:\n";
		cin>>input;
		while(input != "$END$"){
			if(search(input)) cout<<"Word Found\n";
			else cout<<"Not Found\n";
			cin>>input;
		}
	}
};
int main(){
	Trie t;
	t.add_multiple_words();
	t.search_loop();
	return 0;
}