#include<iostream>
using namespace std;
int max_sum_n2(int * arr, int n){
	int * csum = new int[n];
	csum[0] = arr[0];
	for(int i = 1; i < n; i++)
		csum[i] = csum[i-1] + arr[i];
	int ans = INT_MIN;
	for(int s = 0; s < n; s++){
		for(int e = s; e < n; e++){
			int curr_sum;
			if(s == 0)
				curr_sum = csum[e];
			curr_sum = csum[e] - csum[s-1];
			ans = max(ans, curr_sum);
		}
	}
	return ans;
}
int kadane(int * arr, int n){
	int cs = 0;
	int ms = INT_MIN;
	for(int i = 0; i < n; i++){
		cs += arr[i];
		ms = max(ms, cs);
		// if(cs < 0) cs = 0;
		cs = max(cs, 0);
	}
	return ms;
}
int main(){
	int arr[] = {-5, -4, -3, -2, -1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<max_sum_n2(arr, n)<<endl;
	cout<<kadane(arr, n)<<endl;
	return 0;
}