#include<iostream>
using namespace std;
class car{
private:
	int pass;
public:
	string name;
	int speed;
	bool sunroof;
	char * color;
	car(){
		name = "NA";
		speed = -1;
		sunroof = false;
		// color = "null";
		cout<<"car created\n";
	}
	car(string n, int s, bool sun, char * c){
		name = n;
		speed = s;
		sunroof = sun;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	car(car &o){
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
		cout<<endl;		
	}
	void update_color(char* c){
		if(color) delete []color;
		color = new char[strlen(c) + 1];
		strcpy(color, c);
	}
	int get_k(){
		return k;
	}
	void set_k(int k1){
		k = k1;
	}
};
int main(){
	char red[] = "red";
	car c1("Audi", 280, true, red);
	c1.print_details();
	car c2(c1);
	c2.name = "Mc";	
	char blue[] = "blue";
	c2.update_color(blue);
	c2.print_details();
	car c3 = c1;
	c3.print_details();
	c1.set_k(10);
	cout<<c1.get_k()<<endl;
	strcpy(c1.name, "")
	return 0;
}