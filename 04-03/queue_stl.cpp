#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
}
int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		print(q);
		q.pop();
	}cout<<endl;
	return 0;
}