#include<iostream>
using namespace std;
class car{
public:
	string name;
	int speed;
	bool sunroof;
	char * color;
	const int wheels;
	car():wheels(4){
		name = "NA";
		speed = -1;
		sunroof = false;
		// color = "null";
		cout<<"car created\n";
	}
	car(string n, int s, bool sun, char * c, int w = 5):wheels(w){
		name = n;
		speed = s;
		sunroof = sun;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	car(car &o):wheels(o.wheels){
		cout<<"inside copy \n";
		name = o.name;
		speed = o.speed;
		sunroof = o.sunroof;
		color = new char[strlen(o.color)+1];
		strcpy(color, o.color);
	}
	~car(){
		// cout<<"Inside Destructor of "<<name<<endl;
	}
	void print_details(){
		cout<<"name: "<<name<<endl;
		cout<<"speed: "<<speed<<endl;
		cout<<"sunroof: "<<sunroof<<endl;
		if(color)
			cout<<"color: "<<color<<endl;
		cout<<"wheels: "<<wheels<<endl;
		cout<<endl;		
	}
	void update_color(char* c){
		if(color) delete []color;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
};
int main(){
	char red[] = "red";
	car c1("Audi", 280, true, red, 18);
	car c4("Audi", 280, true, red, 1);
	c4.print_details();
	c1.print_details();
	car c2(c1);
	c2.name = "Mc";	
	char blue[] = "blue";
	c2.update_color(blue);
	c2.print_details();
	car c3 = c1;
	c3.print_details();
	// c1.company_name;
	return 0;
}