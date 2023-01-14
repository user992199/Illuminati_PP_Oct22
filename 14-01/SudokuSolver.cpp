#include<iostream>
using namespace std;
void print(int arr[][100], int n, int &sol){
	cout<<"Solution: "<<++sol<<": "<<endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
}
bool possible(int arr[][100], int n, int i, int j, int v){
	// return true;
	// check row
	for(int col = 0; col < n; col++){
		if(arr[i][col] == v) return false;
	}
	// check col
	for(int row = 0; row < n; row++){
		if(arr[row][j] == v) return false;
	}
	// check box
	int sr = i - i % 3;
	int sc = j - j % 3;
	int er = i - i % 3 + 3;
	int ec = j - j % 3 + 3;
	for(int row = sr; row < er; row++){
		for(int col = sc; col < ec; col++){
			if(arr[row][col] == v) return false;
		}
	}

	return true;
}
bool sudoku_solver(int arr[][100], int n, int i, int j, int &sol){
	// base case
	if(i == n){
		print(arr, n, sol);
		// return true;
		return false;
	}
	if(j == n){
		return sudoku_solver(arr, n, i+1, 0, sol);
	}
	// recursive case
	if(arr[i][j] != 0)
		return sudoku_solver(arr, n, i, j+1, sol);
	for(int v = 1; v <= n; v++){
		if(possible(arr, n, i, j, v)){
			arr[i][j] = v;
			if(sudoku_solver(arr, n, i, j+1, sol)) return true;
			arr[i][j] = 0;
		}
	}
	return false;
}
int main(){
	int arr[100][100] = {0};
	int n = 9;
	int sol = 0;
	sudoku_solver(arr, n, 0, 0, sol); 
	return 0;
}