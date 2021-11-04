#include <iostream>
#include <string>
 
#include "classtest.h"

using namespace std;

people::people(string name, string sex, int age){
	this->name = name;
	this->age = age;
	this->set_sex(sex);
}
string people::get_name(){
	cout << "Name is <" << this->name <<">"<< endl;
	return this->name;
}
string people::get_sex(){
	cout << "Sex is <" << this->sex <<">"<< endl;
	return this->sex;
}
void people::set_sex(string sex){
	this->sex = sex;
}

student::student(string name, string sex, int age, int num, bool is_in_school)
	: people(name,sex,age), num(num), is_in_school(is_in_school)
{
	cout << "Creating a student message..." << endl;
}
void student::change_state(){
	this->is_in_school = !this->is_in_school;
	cout << "Change state success !!" << endl;
}

void student::get_state()
{
	cout << "The state of student <" << this->name << "> is <" << this->is_in_school << ">" << endl;
}