#include "Teacher.h"

//void show(Student student) {
//	cout << "Name: " << student.name << endl;
//	cout << "Age: " << student.age << endl;
//	cout << "Mark: " << student.mark << endl;
//	cout << "Alive: " << (student.alive ? "yes" : "no") << endl;
//
//	cout << "----------" << endl;
//}

int main() {
	Student* list = nullptr;
	int size;

	cout << "Input number of students: ";
	cin >> size;

	list = new Student[size];

	cout << "Input data of students: ";

	for (int i = 0; i < size; i++)
	{
		cout << "Student number " << i + 1 << ":\n";
		cout << "name: ";
		cin >> list[i].name;

		cout << "age: ";
		cin >> list[i].age;

		cout << "mark: ";
		cin >> list[i].mark;

		cout << "is alive(y/n): ";
		char answer;
		cin >> answer;

		list[i].alive = islower(answer) == 'y';
	}

	Teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg = result.alive ? "Best student is " +  result.name
		: "No best students ";
	
	cout << msg;

	return 0;
}