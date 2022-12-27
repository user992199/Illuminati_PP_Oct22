#include<iostream>
using namespace std;
void spiral_print(int arr[5][5], int r, int c){
	int sr = 0, sc = 0, er = r-1, ec = c-1;
	while(sr <= er and sc <= ec){
		for(int col = sc; col <= ec; col++){
			cout<<arr[sr][col]<<" ";
		}
		sr++;
		for(int row = sr; row <= er; row++){
			cout<<arr[row][ec]<<" ";
		}
		ec--;
		for(int col = ec; col >= sc; col--){
			cout<<arr[er][col]<<" ";
		}
		er--;
		for(int row = er; row >= sr; row--){
			cout<<arr[row][sc]<<" ";
		}
		sc++;
	}
}
int main(){
	int arr[5][5] = {
		1, 2, 3, 4, 5, 
		6, 7, 8, 9, 10,
		11, 12, 13, 14, 15,
		16, 17, 18, 19, 20,
		21, 22, 23, 24, 25};
	int r = 5, c = 5;
	spiral_print(arr, r, c);
	return 0;
}