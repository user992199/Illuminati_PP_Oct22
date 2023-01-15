#include<iostream>
using namespace std;
void print_keypad_strings(char in[], char keypad[][5], char out[], int i){
	// base case
	if(in[i] == '\0'){
		out[i] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	// in[i] => '7'
	int digit = in[i] - '0';
	for(int j = 0; keypad[digit][j] != '\0'; j++){
		out[i] = keypad[in[i] - '0'][j];
		print_keypad_strings(in, keypad, out, i+1);
	}
}
int main(){
	char keypad[][5] = {
		"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
	};
	char in[] = "726";
	char out[100];
	print_keypad_strings(in, keypad, out, 0);
	return 0;
}