#include<iostream>
using namespace std;
void print_words(int n){
	string digit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	// base case
	if(n == 0) return;
	// revcursive case
	int ud = n%10;
	print_words(n/10);
	cout<<digit[ud]<<" ";
}
int main(){
	int n = 1234567890;
	print_words(n);
	return 0;
}