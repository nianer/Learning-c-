#include <iostream>
#include <string>

using namespace std;

class people
{
private:
	string sex;
public:
	string name;
	int age;
	people(string name, string sex, int age);
	string get_name();
	string get_sex();
	void set_sex(string sex);

	~people(){
		cout << "people <"<< this->name<<"> has been delete !!" << endl;
	}
};

class student: public people
{
public:
	int num;
	bool is_in_school;

	student(string name, string sex, int age, int num, bool is_in_school);
	void change_state();
	void get_state();

	~student(){
		cout << "Student <"<< this->name << "> has been delete !!" << endl;
	}

};