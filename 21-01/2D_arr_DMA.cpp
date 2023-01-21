#include<iostream>
using namespace std;
void upd(int arr[][], int n){
	cout<<n<<endl;
}
void init(int ** mat, int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			mat[i][j] = (i+1)*r + (j+1);
		}
	}
}

int main(){
	int r = 5;
	int c = 3;
	int **arr = new int * [r];
	for(int i = 0; i < r; i++){
		arr[i] = new int [c];
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}