#include<iostream>
using namespace std;
int num_of_ways(int n, int m, int i, int j){
	// base case
	if(i == n-1 or j == m-1) return 1;
	// recursive case
	return num_of_ways(n, m, i+1, j)
	 + num_of_ways(n, m, i, j+1)
	 + num_of_ways(n, m, i+1, j+1);
}
int main(){
	int n = 3, m = 3;
	cout<<num_of_ways(n, m, 0, 0)<<endl;
	return 0;
}