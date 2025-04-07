#include "main.h"
class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	string getString() {
		string s = "Name: " + name;
		s += ", age: " + to_string(age);
		s += ", mark: " + to_string(mark);
		s += ", alive: ";
		s += (alive ? "Yes" : "No");
		return s;

	}
};