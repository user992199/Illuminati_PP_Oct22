#include<iostream>
using namespace std;
void wave_print(int arr[3][5], int r, int c){
	for(int col = 0; col < c; col++){
		if(col % 2){
			for(int row = r-1; row >= 0; row--){
				cout<<arr[row][col]<<" ";
			}
		}else{
			for(int row = 0; row < r; row++){
				cout<<arr[row][col]<<" ";
			}
		}
	}
}
int main(){
	int arr[3][5] = {
		1, 2, 3, 4, 5, 
		6, 7, 8, 9, 10,
		11, 12, 13, 14, 15};
	int r = 3, c = 5;
	wave_print(arr, r, c);
	return 0;
}