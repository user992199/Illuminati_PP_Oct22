#include<iostream>
using namespace std;
int main(){
	int n = 9;
	int arr[1000];
	for(int i = 0; i < n; i++){
		arr[i] = i+1;
	}
	int key;
	cin>>key;
	bool flag = false;
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			flag = true;
			cout<<i<<endl;
			break;
		}
	}
	if(!flag){
		cout<<-1<<endl;
	}
	return 0;
}