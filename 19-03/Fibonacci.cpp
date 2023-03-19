#include<iostream>
#include<vector>
using namespace std;
int fibo_td_h(int n, vector<int> &dp){
	// check before calculate
	if(dp[n] != -1) return dp[n];
	if(n < 2) return dp[n] = n;
	// store before return
	return dp[n] = fibo_td_h(n-1, dp) + fibo_td_h(n-2, dp);
}
int fibo_td(int n){
	vector<int> dp(n, -1);
	return fibo_td_h(n-1, dp);
}
int fibo_bu(int n){
	vector<int> dp(n, -1);
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i < n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n-1];
}
int fibo_opt(int n){
	int a = 0, b = 1, c;
	for(int i = 2; i < n; i++){
		c = a+b;
		a = b;
		b = c;
	}
	return c;
}
int main(){
	int n = 10;
	cout<<fibo_td(n)<<endl;
	cout<<fibo_bu(n)<<endl;
	cout<<fibo_opt(n)<<endl;
	return 0;
}