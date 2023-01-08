#include<iostream>
using namespace std;
void print_all_subsequences(char in[], char out[], int i = 0, int j = 0){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	print_all_subsequences(in, out, i+1, j);
	out[j] = in[i];
	print_all_subsequences(in, out, i+1, j+1);

}
int main(){
	char arr[100] = "abcde";
	char arr2[100] = "";
	print_all_subsequences(arr, arr2);
	return 0;
}