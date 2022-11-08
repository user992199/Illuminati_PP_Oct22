#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int num;
	cin>>num;
	int i = 2, min, max, sum;
	min = max = sum = num;
	while(i<=n){
		cin>>num;
		if(num>max){
			max = num;
		}
		if(num<min){
			min = num;
		}
		sum = sum + num;
		i = i + 1;
	}
	cout<<"max: "<<max<<endl;
	cout<<"min: "<<min<<endl;
	cout<<"avg: "<<sum/n<<endl;
	return 0;
}