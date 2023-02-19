#include<iostream>
#include<stack>
using namespace std;
bool is_balanced(string str){
	stack <char> s;
	for(int i = 0; str[i]; i++){
		// (){}[]
		if(str[i] == '(' or str[i] == '{' or str[i] == '['){
			s.push(str[i]);
		}else if(str[i] == ')'){
			if(s.empty()) return false;
			if(s.top() == '('){
				s.pop();
			}
		}else if(str[i] == ']'){
			if(s.empty()) return false;
			if(s.top() == '['){
				s.pop();
			}
		}else if(str[i] == '}'){
			if(s.empty()) return false;
			if(s.top() == '{'){
				s.pop();
			}
		}
	}
	return s.empty();
}
int main(){
	string str = "(a+b} * {c - d) - [x+y]";
	if(is_balanced(str)){
		cout<<"yes\n";
	}else{
		cout<<"no\n";
	}
	return 0;
}