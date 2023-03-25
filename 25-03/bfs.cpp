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
	void bfs(T src){
		queue<T> q;
		unordered_map<T, bool> visited;
		q.push(src);
		visited[src] = true;
		cout<<"BFS: ";
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout<<node<<" ";
			for(auto neighbor: adj_list[node]){
				if(!visited[neighbor]){
					q.push(neighbor);
					visited[neighbor] = true;
				}
			}
		}
		cout<<endl;
	}
	// Single Source Shortest Path
	void SSSP(T src, T dest){
		queue<T> q;
		unordered_map<T, bool> visited;
		unordered_map<T, int> dist;
		unordered_map<T, T> parent;
		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			for(auto neighbor: adj_list[node]){
				if(!visited[neighbor]){
					q.push(neighbor);
					visited[neighbor] = true;
					dist[neighbor] = dist[node] + 1;
					parent[neighbor] = node;
				}
			}
		}
		while(src != dest){
			cout << dest << " <- ";
			dest = parent[dest];
		}
		cout<<src<<endl;
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

	g.SSSP(5, 0);
	return 0;
}