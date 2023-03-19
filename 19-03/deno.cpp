#include<iostream>
#include<vector>
using namespace std;
int rec(int n, int * deno, int count){
	if(n == 0) return 0;
	int ans = INT_MAX;
	for(int i = 0; i < count; i++){
		if(n-deno[i] >= 0)
			ans = min(ans, rec(n - deno[i], deno, count));
	}
	if(ans == INT_MAX) return ans;
	return ans+1;
}
int td(int n, int * deno, int count, vector<int> & dp){
	if(dp[n] != -1) return dp[n];
	if(n == 0) return 0;
	int ans = INT_MAX;
	for(int i = 0; i < count; i++){
		if(n-deno[i] >= 0)
			ans = min(ans, td(n - deno[i], deno, count, dp));
	}
	if(ans == INT_MAX) return dp[n] = ans;
	return dp[n] = ans+1;
}
int bu(int n, int * deno, int count){
	vector<int> dp(n+1);
	dp[0] = 0;
	for(int i = 1; i <= n; i++){
		int ans = INT_MAX;
		for(int j = 0; j < count; j++){
			if(i-deno[j] >= 0)
				ans = min(ans, dp[i - deno[j]]);
		}
		if(ans != INT_MAX) ans++;
		dp[i] = ans;
	}
	// for(int i = 0; i <= n; i++){
	// 	cout<<dp[i]<<" ";
	// }
	cout<<endl;
	return dp[n];
}
int main(){
	int deno[] = {2, 7, 10};
	int count = sizeof(deno)/sizeof(deno[0]);
	int n = 100;
	vector<int> dp(n+1, -1);
	// cout<<rec(n, deno, count)<<endl;
	cout<<td(n, deno, count, dp)<<endl;
	cout<<bu(n, deno, count)<<endl;
	return 0;
}