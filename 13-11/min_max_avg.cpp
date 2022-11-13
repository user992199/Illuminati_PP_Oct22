#include<iostream>
using namespace std;
int main(){
	int arr[1000];
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int maxidx = 0, minidx = 0, sum = arr[0];
	for(int i = 1; i < n; i++){
		sum+=arr[i];
		if(arr[maxidx]<arr[i]){
			maxidx = i;
		}
		if(arr[minidx]>arr[i]){
			minidx = i;
		}
	}
	cout<<"max: "<<"arr["<<maxidx<<"] = "<<arr[maxidx]<<endl;
	cout<<"min: "<<"arr["<<minidx<<"] = "<<arr[minidx]<<endl;
	cout<<"avg = "<<sum/n<<endl;
	return 0;
}