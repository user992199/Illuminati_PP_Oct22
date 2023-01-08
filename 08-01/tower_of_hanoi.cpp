#include<iostream>
using namespace std;
// Min Move: 2^n - 1
int step = 0;
void tower_of_hanoi(int n, char source, char target, char helper){
	// base case
	if(n == 0) return;
	// recursive case
	// Move n-1 disks from source to helper using target
	tower_of_hanoi(n-1, source, helper, target);
	// Move Disk N from source to target
	cout<<"Step "<<++step<<": Move Disk " << n << " from tower "<<source<< " to tower "<< target<<endl;
	// Move n-1 disks from helper to target using source
	tower_of_hanoi(n-1, helper, target, source);
}
int main(){
	int n = 5;
	char s = 'A', t = 'C', h = 'B';
	tower_of_hanoi(n, s, t, h);
	// cout<<"Move Disk" << n << "from tower "<<source<< " to tower "<< target<<endl;
	return 0;
}