#include<iostream>
using namespace std;
bool check_perm(string s1, string s2){
	int f1[128] = {0};
	int f2[128] = {0};
	if(s1.size() != s2.size()) return false;
	for(int i = 0; i < s1.size(); i++){
		f1[s1[i]]++;
	}
	for(int i = 0; i < s2.size(); i++){
		f2[s2[i]]++;
	}
	for(int i = 0; i < 128; i++)
		if(f1[i] != f2[i]) return false;
	return true;
}
int main(){
	string s1 = "abcde";
	string s2 = "edcba";
	if(check_perm(s1, s2)) cout<<"Yes\n";
	else cout<<"No\n";
	return 0;
}