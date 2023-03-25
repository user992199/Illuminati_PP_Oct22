#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>
#include<queue>
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
	void dfs_helper(T src, unordered_map<T, bool> &vis){
		vis[src] = true;
		cout<<src<<" ";
		for(auto neigh: adj_list[src]){
			if(!vis[neigh]){
				dfs_helper(neigh, vis);
			}
		}
	}
	void dfs(T src){
		unordered_map<int, bool> vis;
		dfs_helper(src, vis);
		cout<<endl;
	}
	int num_comp(){
		unordered_map<int, bool> vis;
		int count = 0;
		for(auto src: adj_list){
			if(!vis[src.first]){
				count++;
				dfs_helper(src.first, vis);
				cout<<endl;
			}
		}
		return count;
	}
};
int main(){
	Graph <int>g;
	g.add_edge(0, 1);
	g.add_edge(0, 4);
	g.add_edge(1, 2);
	g.add_edge(2, 4);
	g.add_edge(2, 3);
	g.add_edge(3, 5);
	g.add_edge(3, 4);
	g.add_edge(10, 11);
	g.add_edge(11, 12);
	g.add_edge(-11, -12);
	g.add_edge(-11, 120);
	cout<<g.num_comp()<<endl;
	return 0;
}