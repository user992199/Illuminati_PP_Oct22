#include<iostream>
using namespace std;
void get_name(char a1[], int n, char dl = '\n'){
	for(int i = 0; i < n; i++){
		cin.get(a1[i]);
		if(a1[i] == dl){
			a1[i] = '\0';
			break;
		}
	}
}
int main(){
	char a1[50];
	// cin.getline(a1, 50, '$');
	get_name(a1, 50, '1');
	// get_name(a1, 50);
	cout<<a1<<endl;
	return 0;
}