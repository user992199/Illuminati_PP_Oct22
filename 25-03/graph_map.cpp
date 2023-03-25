#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>
using namespace std;
template<typename T>
class Graph{
	unordered_map<T, list<T> > adj_list;
public:
	void add_edge(T u, T v, bool bidirec = true){
		adj_list[u].push_back(v);
		if(bidirec){
			adj_list[v].push_back(u);
		}
	}
	void print(){
		for(auto node: adj_list){
			cout<<node.first<<" -> ";
			for(auto neigh: node.second){
				cout<<neigh<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	Graph<string> g;
	g.add_edge("Modi", "Trump");
	g.add_edge("Modi", "Yogi");
	g.add_edge("Prabhu", "Modi", false);
	g.add_edge("Yogi", "Prabhu", false);
	g.add_edge("Putin", "Trump", false);
	g.add_edge("Putin", "Modi", false);
	g.add_edge("Putin", "Pope", false);
	g.print();
	return 0;
}