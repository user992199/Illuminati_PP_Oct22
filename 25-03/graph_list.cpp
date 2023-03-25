#include<iostream>
#include<list>
using namespace std;
class Graph{
	list<int> *adj_list;
	int num_v;
public:
	Graph(int V){
		num_v = V;
		adj_list = new list<int> [V];
	}
	void add_edge(int u, int v, bool bidirec = true){
		adj_list[u].push_back(v);
		if(bidirec){
			adj_list[v].push_back(u);
		}
	}
	void print(){
		for(int i = 0; i < num_v; i++){
			cout<<i<<" -> ";
			for(auto neigh: adj_list[i]){
				cout<<neigh<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	Graph g(5);
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(1, 3);
	g.add_edge(1, 4);
	g.add_edge(2, 3);
	g.add_edge(4, 3);
	g.print();
	return 0;
}