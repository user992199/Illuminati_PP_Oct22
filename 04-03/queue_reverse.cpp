#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
}
void reverse_q(queue<int> &q){
	// base case
	if(q.empty()) return;
	// recursive case
	int front = q.front();
	q.pop();
	reverse_q(q);
	q.push(front);
}
int main(){
	queue<int> q;
	for(int i = 1; i <= 5; i++){
		q.push(i);
	}
	print(q);
	reverse_q(q);
	print(q);
	return 0;
}