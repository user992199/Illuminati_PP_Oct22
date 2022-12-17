#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int c1, c2, c3, c4;
		cin>>c1>>c2>>c3>>c4;
		int n, m;
		cin>>n>>m;
		int rick[n], cab[m];
		for(int i = 0; i < n; i++){
			cin>>rick[i];
		}
		for(int i = 0; i < m; i++){
			cin>>cab[i];
		}
		int rickshaw_cost = 0, cab_cost = 0;
		for(int i = 0; i < n; i++){
			rickshaw_cost += min(c1*rick[i], c2);
		}
		rickshaw_cost = min(rickshaw_cost, c3);
		for(int i = 0; i < m; i++){
			cab_cost += min(c1*cab[i], c2);
		}
		cab_cost = min(cab_cost, c3);
		cout<<min(cab_cost+rickshaw_cost, c4)<<endl;
	}
	return 0;
}