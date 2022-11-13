#include<iostream>
using namespace std;
int main(){
	int arr[] = {12, 45, 546, 5, 2, 789, 129, 869, -12, 823, -100};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"n: "<<n<<endl;
	for(int i = 0; i < n-1; i++){
		int no_of_swaps = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				no_of_swaps++;
			}
		}
		cout<<"i: "<<i<<endl;
		if(no_of_swaps == 0){
			// arrays is already sorted
			break;
		}
	}
	for(int i = 0; i < n ; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}