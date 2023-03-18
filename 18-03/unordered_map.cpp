#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
int main(){
	unordered_map<string, int> umap;
	map<string, int> omap;
	// insert 1
	umap["Apple"] = 100;
	omap["Apple"] = 100;
	// cout<<umap["Apple"]<<endl;
	umap["Apple"] = 10;
	omap["Apple"] = 10;
	// cout<<umap["Apple"]<<endl;

	// insert 2
	// umap.insert({"Banana", 77});
	// insert 3
	umap.insert(make_pair("Pineapple", 64));
	omap.insert(make_pair("Pineapple", 64));

	// insert 4
	pair <string, int> p2("iWaterM", 3);
	umap.insert(p2);
	omap.insert(p2);
	for (int i = 0; i < umap.bucket_count(); i++){
		// cout<<umap<<" ";
		for(auto it = umap[i].begin(); it != umap[i].end(); it++){
			cout<<"("<<it->first<<", "<<it->second<<") ";
		}
		cout<<endl;
	}
	cout<<endl;
	// for(auto k: umap){
	// 	cout<<k.first<<" "<<k.second<<endl;
	// }
	// cout<<endl;
	// for(auto k: omap){
	// 	cout<<k.first<<" "<<k.second<<endl;
	// }
	return 0;
}