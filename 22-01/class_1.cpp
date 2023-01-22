#include<iostream>
using namespace std;
class car{
public:
	string name;
	int speed;
	bool sunroof;
	char *color;
	car(){
		name = "NA";
		speed = -1;
		sunroof = false;
		color = NULL;
		cout<<"car created\n";
	}
	car(string n, int s, bool sun, char*c){
		name = n;
		speed = s;
		sunroof = sun;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	~car(){
		delete []color;
		cout<<"Inside Destructor of "<<name<<endl;
	}
	void print_details(){
		cout<<"name: "<<name<<endl;
		cout<<"speed: "<<speed<<endl;
		cout<<"sunroof: "<<sunroof<<endl;
		if(color)
			cout<<"color: "<<color<<endl;
		cout<<endl;		
	}
	void update_color(char * c){
		if(color) delete []color;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
};
int main(){
	car c1;
	c1.name = "Audi";
	c1.speed = 280;
	c1.sunroof = true;
	char red[] = "red";
	c1.update_color(red);
	c1.print_details();
	car c2;
	c2.print_details();
	char orange[] = "Orange";
	car c3("MClaren", 200, true, orange);
	c3.print_details();
	char black[] = "black";
	c3.update_color(black);
	c3.print_details();
	return 0;
}