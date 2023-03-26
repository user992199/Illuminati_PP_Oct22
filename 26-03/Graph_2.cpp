#include<iostream>
#include<unordered_map>
#include<utility>
#include<cstring>
#include<list>
#include<set>
using namespace std;
template<typename T>
class Graph{
	unordered_map<T, list<pair<T, int> > > umap;
public:
	void add_edge(T u, T v, int dist, bool bidirec = true){
		umap[u].push_back(make_pair(v, dist));
		if(bidirec){
			umap[v].push_back(make_pair(u, dist));
		}
	}
	void print(){
		for(auto node: umap){
			cout<<node.first<<" -> ";
			for(auto neighbor: node.second){
				cout<<"("<<neighbor.first<<", "<<neighbor.second<<") ";
			}
			cout<<endl;
		}
	}
	void djikstra(T src){
		// Initialization
		set<pair<int, T> > s;
		unordered_map<T, int> dist;
		s.insert(make_pair(0, src));
		for(auto node: umap){
			dist[node.first] = INT_MAX;
		}
		dist[src] = 0;
		// Initialization
		while(!s.empty()){
			// visit kar raha huun har ek node ko jo set mein hai
			// ya fir sabse aage waale node ko utha lo
			// uske baad uske saare neighbor ka dist dekho
			auto front_add = s.begin();
			T node = (*front_add).second;
			int node_dist = (*front_add).first;
			// dist[node] = node_dist;
			s.erase(s.begin());
			// node ke saare neighbor par visit karo
			for(auto neighbor_pair: umap[node]){
				T neighbor = neighbor_pair.first;
				int nn_dist = neighbor_pair.second;
				// check karo ki kya neighbor set mein pada hai ya nahi
				auto neighbor_add = s.find(make_pair(dist[neighbor], neighbor));
				if(neighbor_add != s.end()){
					// check karo ki kya neighbor ke liya naya shortest path mila hai
					if(dist[node] + nn_dist < dist[neighbor]){
						// update
						s.erase(neighbor_add);
						s.insert(make_pair(dist[node] + nn_dist, neighbor));
						dist[neighbor] = dist[node] + nn_dist;
					}
				}
				// abh check karo ki kya pehle dist[neighbor] update hua hai ya nahi
				else if(dist[neighbor] == INT_MAX){
					s.insert(make_pair(dist[node] + nn_dist, neighbor));
					dist[neighbor] = dist[node] + nn_dist;
				}
			}
		}
		for(auto node: dist){
			cout<<node.first<<": "<<node.second<<endl;
		}
	}
};
int main(){
	Graph<string> g;
	g.add_edge("Amritsar", "Agra", 1);
	g.add_edge("Amritsar", "Jaipur", 4);
	g.add_edge("Delhi", "Jaipur", 2);
	g.add_edge("Mumbai", "Jaipur", 8);
	g.add_edge("Mumbai", "Bhopal", 3);
	g.add_edge("Agra", "Bhopal", 2);
	g.add_edge("Agra", "Delhi", 1);
	g.djikstra("Delhi");
	return 0;
}