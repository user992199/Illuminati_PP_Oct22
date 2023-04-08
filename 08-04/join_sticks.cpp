#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int> &sticks) {
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i = 0; i < sticks.size(); i++) pq.push(sticks[i]);
        int ans = 0;
        while(pq.size() > 1){
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();
            ans += first + second;
            pq.push(first + second);
        }
        return ans;
    }
};
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(8);
    v.push_back(3);
    Solution s;
    cout<<s.minimumCost(v)<<endl;
    return 0;
}