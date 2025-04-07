#include "Student.h"

//void show(Student student) {
//	cout << "Name: " << student.name << endl;
//	cout << "Age: " << student.age << endl;
//	cout << "Mark: " << student.mark << endl;
//	cout << "Alive: " << (student.alive ? "yes" : "no") << endl;
//
//	cout << "----------" << endl;
//}
void change(Student student) {
	student.name = "Vova";
	student.age = 15;
	student.mark = 10;
	student.alive = false;
}
int main() {
	Student* st1 = nullptr;
	st1 = new Student;

	st1->name = "Vlad";
	st1->age = 15;
	st1->mark = 9.9;
	st1->alive = true;

	Student* st2 = st1;

    cout << "Before: " << endl;
	cout << st1->getString() << endl;

	st2->name = "Matvey";

	cout << "After: " << endl;
	cout << st1->getString() << endl;

	return 0;
}