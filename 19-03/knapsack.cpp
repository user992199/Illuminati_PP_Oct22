#include<iostream>
#include<vector>
using namespace std;
int knapsack(int w[], int p[], int n, int c, int i = 0){
	// base case
	if(i == n) return 0;
	// recursive case
	// ya to nahi churaunga
	int ans = knapsack(w, p, n, c, i+1);
	// ya fir chura lunga
	if(c - w[i] >= 0)
		ans = max(ans, knapsack(w, p, n, c-w[i], i+1) + p[i]);
	return ans;
}
int knapsack_td(int w[], int p[], int n, int c,
	vector<vector<int> > &dp, int i = 0){
	// base case
	if(i == n) return 0;
	if(dp[i][c] != -1) return dp[i][c];
	// recursive case
	// ya to nahi churaunga
	int ans = knapsack_td(w, p, n, c, dp, i+1);
	// ya fir chura lunga
	if(c - w[i] >= 0)
		ans = max(ans, knapsack_td(w, p, n, c-w[i], dp, i+1) + p[i]);
	return dp[i][c] = ans;
}
int knapsack_bu(int w[], int p[], int n, int c){
	vector<vector<int> > dp(n, vector<int>(c+1, 0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= c; j++){
			if(i > 0) dp[i][j] = dp[i-1][j];
			if(j-w[i] >= 0 and i > 0)
				dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + p[i]);
			else if(j-w[i]>=0) dp[i][j] = p[i];
		}
	}
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j <= c; j++){
	// 		cout<<dp[i][j]<<" ";
	// 	}cout<<endl;
	// }
	return dp[n-1][c];
}
int main(){
	int weight[] = {8, 7, 3, 9};
	int price[] = {19, 14, 9, 17};
	int n = sizeof(weight)/sizeof(weight[0]);
	int cap = 9;
	vector<vector<int> > dp(n, vector<int>(cap+1, -1));
	cout<<knapsack(weight, price, n, cap)<<endl;
	cout<<knapsack_td(weight, price, n, cap, dp, 0)<<endl;
	cout<<knapsack_bu(weight, price, n, cap)<<endl;
	return 0;
}