#include<iostream>
using namespace std;
int main(){
	int n;
	char arr[1000];
	cin>>n;
	cin.ignore(); // cin.get();
	cin.getline(arr, 100);
	cout<<"number => "<<n<<endl;
	cout<<"string => "<<arr<<endl;
	return 0;
}