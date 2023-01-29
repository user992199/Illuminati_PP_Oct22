#include<iostream>
#include<vector>
using namespace std;
void spiral_print(vector<vector<int> > arr){
	int sr = 0, sc = 0, er = arr.size()-1, ec = arr[0].size()-1;
	while(sr <= er and sc <= ec){
		for(int col = sc; col <= ec; col++){
			cout<<arr[sr][col]<<" ";
		}
		sr++;
		if(sr>er) return;
		for(int row = sr; row <= er; row++){
			cout<<arr[row][ec]<<" ";
		}
		ec--;
		if(ec<sc) return;
		for(int col = ec; col >= sc; col--){
			cout<<arr[er][col]<<" ";
		}
		er--;
		if(er<sr) return;
		for(int row = er; row >= sr; row--){
			cout<<arr[row][sc]<<" ";
		}
		sc++;
	}
}
int main(){
	vector<int> v1(10, 4);
	vector<vector< int > > v(5, v1);
	spiral_print(v);
	return 0;
}