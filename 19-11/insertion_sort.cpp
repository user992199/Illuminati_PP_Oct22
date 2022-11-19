#include<iostream>
using namespace std;
int main(){
	int arr[] = {3, 4, 32, 4, 54, 2, 54, 234, 54, 34};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 1; i < n; i++){
		for(int j = i-1; j >= 0; j--){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}else{
				break;
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}