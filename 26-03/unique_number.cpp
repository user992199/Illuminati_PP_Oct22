#include<iostream>
using namespace std;
int un(int * arr, int n){
	int ans = 0;
	for(int i = 0 ;i < n ; i++){
		// ans = ans ^ arr[i];
		ans ^= arr[i];
	}
	return ans;
}
void un_2(int * arr, int n){
	int ans = un(arr, n);
	int filter = 1;
	while((ans & filter) == 0){
		filter <<= 1;
	}
	int un1 = 0, un2 = 0;
	for(int i = 0; i < n; i++){
		if((arr[i] & filter) == 0){
			un1 ^= arr[i];
		}else{
			un2 ^= arr[i];
		}
	}
	cout<<un1<<" "<<un2<<endl;
}
int main(){
	int arr[] = {2, 4, 5, 6, 5, 6, -2, -8, 4, -8, 2, -7};
	int n = sizeof(arr)/sizeof(arr[0]);
	un_2(arr, n);
	return 0;
}