#include<iostream>
using namespace std;
int main(){
	// int i;
	// cin>>i;
	// int k = 1;
	// switch(i){
	// case 'k':
	// case 11:
	// 	cout<<"\ta"<<endl;
	// 	break;
	// case 2:
	// case 22:
	// 	cout<<"\tb"<<endl;
	// 	break;
	// case 3:
	// case 33:
	// 	cout<<"\tc"<<endl;
	// 	break;
	// default:
	// 	cout<<"\td-z"<<endl;
	// 	break;
	// }
	char ch;
	cin>>ch;
	switch(ch){
	case 'a':
	case 'A':
		cout<<"First alphabet\n";
		break;
	case 'b':
	case 'B':
		cout<<"2nd alphabet\n";
		break;
	default:
		cout<<"Others\n";
		break;
	}
	cout<<(int)ch<<endl;
	return 0;
}