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
	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	temp = st1;

	cout << "Before: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	st1.name = "Vova";

	cout << "After: " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;



	/*cout << st2.getString() << endl;*/

	/*string name = st1.mark > st2.mark ? st1.name : st2.name;*/
	/*Student t = st1.mark > st2.mark ? st1 : st2;

	cout << "More motivated student is: " << t.name << endl;*/

	return 0;
}