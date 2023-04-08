#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Solution {
public:
    int helper(string text1, string text2, vector<vector<int> > &dp, int i, int j){
        if(text1.size() == i or text2.size() == j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(text1[i] == text2[j]){
            return dp[i][j] = helper(text1, text2, dp, i+1, j+1) + 1;
        }else{
            return dp[i][j] = max(
                helper(text1, text2, dp, i+1, j),
                helper(text1, text2, dp, i, j+1)
            );
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int> > dp(text1.size(), vector<int> (text2.size(), -1));
        return helper(text1, text2, dp, 0, 0);
    }
};
int main(){
    string s1 = "uday";
    string s2 = "prakhar";
    Solution s;
    cout<<s.longestCommonSubsequence(s1, s2)<<endl;
    return 0;
}