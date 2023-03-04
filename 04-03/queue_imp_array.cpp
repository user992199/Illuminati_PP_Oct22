#include<iostream>
using namespace std;
class Queue{
public:
	int * arr, ts, s, e, cs;
	Queue(int gs = 10){
		arr = new int[gs];
		ts = gs;
		s = 0;
		e = -1;
		cs = 0;
	}
	void push(int data){
		if(cs < ts){
			e = (e + 1) % ts;
			arr[e] = data;
			cs++;
		}
	}
	void pop(){
		if(cs > 0){
			s = (s + 1) % ts;
			cs--;
		}
	}
	bool empty(){
		return cs == 0;
	}
	int front(){
		return cs ? arr[s] : -1;
 	}
	int size(){
		return cs;
	}
};
int main(){
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	q.push(7);
	cout<<"size: "<<q.size()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}cout<<endl;
	return 0;
}