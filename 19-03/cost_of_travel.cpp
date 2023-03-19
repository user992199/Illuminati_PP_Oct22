#include<iostream>
#include<vector>
using namespace std;
int rec(int mat[][10], int r, int c, int i = 0, int j = 0){
	// base case
	// if(i >= r or j >= c) return INT_MAX;
	if(i == r-1 and j == c-1) return mat[i][j];
	// recursive case
	int ans = INT_MAX;
	if(i+1 < r) ans = rec(mat, r, c, i+1, j);
	if(j+1 < c) ans = min(ans, rec(mat, r, c, i, j+1));
	return ans + mat[i][j];
}
int td(int mat[][10], int r, int c, 
	vector<vector<int> > & dp,
 	int i = 0, int j = 0){
	// base case
	// if(i >= r or j >= c) return INT_MAX;
	if(dp[i][j] != -1) return dp[i][j];
	if(i == r-1 and j == c-1) return dp[i][j] = mat[i][j];
	// recursive case
	int ans = INT_MAX;
	if(i+1 < r) ans = td(mat, r, c, dp, i+1, j);
	if(j+1 < c) ans = min(ans, td(mat, r, c, dp, i, j+1));
	return dp[i][j] = ans + mat[i][j];
}
int bu(int mat[][10], int r, int c){
	vector<vector<int> > dp(r, vector<int> (c, -1));
	// to fill the last/destination cell
	dp[r-1][c-1] = mat[r-1][c-1];
	// to fill the last row
	for(int j = c-2; j >= 0; j--){
		dp[r-1][j] = dp[r-1][j+1] + mat[r-1][j];
	}
	for(int i = r-2; i >= 0; i--){
		// to fill the last column
		dp[i][c-1] = dp[i+1][c-1] + mat[i][c-1];
		// to fill the upper right box
		for(int j = c-2; j >= 0; j--){
			dp[i][j] = mat[i][j]
				+ min(dp[i+1][j], dp[i][j+1]);
		}
	}
	return dp[0][0];
}
int main(){
	int mat[10][10] = {
		{1, 2, 1, 1},
		{1, 10, 10, 1},
		{5, 50, 50, 1},
		{10, 100, 100, 1}
	};
	int r = 4, c = 4;
	// int r = sizeof(mat)/sizeof(mat[0]);
	// int c = sizeof(mat[0])/sizeof(mat[0][0]);
	vector<vector<int> > dp(r, vector<int> (c, -1));
	cout<<rec(mat, r, c)<<endl;
	cout<<td(mat, r, c, dp)<<endl;
	cout<<bu(mat, r, c)<<endl;
	return 0;
}