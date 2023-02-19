#include<iostream>
using namespace std;
template <typename T>
class Stack{
	T * arr;
	int size_stack;
	int top_stack;
public:
	Stack(int size_stack = 10){
		this->size_stack = size_stack;
		arr = new T [size_stack];
		top_stack = 0;
	}
	// push
	void push(T data){
		if(top_stack == size_stack){
			cout<<"Stack Overflow\n";
			return;
		}
		arr[top_stack] = data;
		top_stack++;
	}
	// pop
	void pop(){
		if(!top_stack){
			cout<<"Stack Underflow\n";
			return;
		}
		top_stack--;
	}
	// top
	T top(){
		if(!top_stack) return -1;
		return arr[top_stack-1];
	}
	// empty
	bool empty(){
		return top_stack == 0;
	}
};
int main(){
	Stack<int> s(5);
	for(int i = 0; i < 10; i++){
		s.push(i);
	}
	for(int i = 0; !s.empty(); i++){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
	return 0;
}