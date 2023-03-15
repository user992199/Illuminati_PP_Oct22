#include<iostream>
#include<queue>
using namespace std;
class fruit{
public:
	string name;
	int price;
	float weight;
	char grade;
	fruit(string n, int p, float w, char g){
		name = n;
		price = p;
		weight = w;
		grade = g;
	}
};
class comp_p{
public:
	bool operator()(fruit a, fruit b){
		return a.price > b.price;
	}
};
class comp_n{
public:
	bool operator()(fruit a, fruit b){
		return a.name > b.name;
	}
};
class comp_w{
public:
	bool operator()(fruit a, fruit b){
		return a.weight > b.weight;
	}
};
class comp_g{
public:
	bool operator()(fruit a, fruit b){
		return a.grade > b.grade;
	}
};
void print(fruit f){
	cout<<"Name: "<<f.name<<endl;
	cout<<"Price: "<<f.price<<endl;
	cout<<"Weight: "<<f.weight<<endl;
	cout<<"Grade: "<<f.grade<<endl<<endl;
}
int main(){
	priority_queue<fruit, vector<fruit>, comp_w > min_h;
	fruit apple("apple", 100, 5.23, 'a');
	fruit banana("banana", 12, 10.17, 'b');
	fruit cat("cat", 10000, 2000.35, 'm');
	min_h.push(apple);
	min_h.push(banana);
	min_h.push(cat);
	while(!min_h.empty()){
		print(min_h.top());
		min_h.pop();
	}
	return 0;
}