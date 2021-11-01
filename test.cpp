#include "classtest.h"

#include <iostream>
#include <string>

using namespace std;



int main(int argc, char const *argv[])
{
	people p1 = people("Alice","man",12);
	p1.get_name();
	p1.get_sex();
	student s1 = student("Bob","woman",20,1000,true);
	s1.get_state();
	s1.change_state();
	s1.get_state();
	cout << "Success !!" << endl;
	return 0;
}