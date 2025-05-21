#include "Human.h"

Human::Human() : Human("", 0, false) {}

Human::Human(string name, int age, bool gender) {
	this->name = name;
	this->age = age;
	this->gender = gender;
}
Human::Human(const Human& human) :
	Human(human.name, human.age, human.gender) {}
Human::~Human() {}



string Human::getName() {
	return name;
}
void Human::setName(string name) {
	this->name = name
}
int Human::getAge() {
	return age;
}
void Human::setAge(int age) {
	this->age = age;
}
bool Human::isGender() {
	return gender;
}
void Human::setGender(bool gender) {
	this -> gender = gender
}

string Human::toString() {
	string s = "";
	s += name + ", "
		+ to_string(age) + ", "
		+ (gender ? "male" : "female");
	return s;
}