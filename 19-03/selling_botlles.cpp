#include<iostream>
#include<vector>
using namespace std;
int rec(int * bottle, int n, int s, int e){
	// base case
	if(s > e) return 0;
	// recursive case
	int date = n - e + s;
	int op1 = bottle[s] * date + rec(bottle, n, s+1, e);
	int op2 = bottle[e] * date + rec(bottle, n, s, e-1);
	return max(op1, op2);
}
int td(int * bottle, int n, int s, int e, vector<vector<int> > &dp){
	// base case
	if(s > e) return 0;
	if(dp[s][e] != -1) return dp[s][e];
	// recursive case
	int date = n - e + s;
	int op1 = bottle[s] * date + rec(bottle, n, s+1, e);
	int op2 = bottle[e] * date + rec(bottle, n, s, e-1);
	return dp[s][e] = max(op1, op2);
}
int bu(int * bottle, int n){
	vector<vector<int> > dp(n, vector<int>(n, 0));
	for(int s = n-1; s >= 0; s--){
		dp[s][s] = bottle[s] * n;
		for(int e = s+1; e < n; e++){
			int date = n - e + s;
			dp[s][e] = max(
				dp[s+1][e] + bottle[s] * date, 
				dp[s][e-1] + bottle[e] * date
 			);
		}
	}
	cout<<"Bottom Up Matrix: \n";
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<dp[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	return dp[0][n-1];
}
int main(){
	int bottle[] = {4, 3, 5, 1, 2};
	int n = sizeof(bottle)/sizeof(bottle[0]);
	vector<vector<int> > dp(n, vector<int> (n, -1));
	cout<<rec(bottle, n, 0, n-1)<<endl;
	cout<<td(bottle, n, 0, n-1, dp)<<endl;
	cout<<bu(bottle, n)<<endl;
	return 0;
}