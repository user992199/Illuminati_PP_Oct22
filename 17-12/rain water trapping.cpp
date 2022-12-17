#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tower[n], left_max[n], right_max[n];
		for(int i = 0; i < n; i++){
			cin>>tower[i];
		}
		// find left max for each tower
		left_max[0] = tower[0];
		for(int i = 1; i < n; i++){
			left_max[i] = max(left_max[i-1], tower[i]);
		}
		// find right max for each tower
		right_max[n-1] = tower[n-1];
		for(int i = n-2; i >= 0; i--){
			right_max[i] = max(right_max[i+1], tower[i]);
		}
		// find water stored over each tower
		int total_water = 0;
		for(int i = 1; i < n-1; i++){
			total_water += (min(left_max[i], right_max[i]) - tower[i]);
		}
		// print total water stored
		cout<<total_water<<endl;
	}
	return 0;
}