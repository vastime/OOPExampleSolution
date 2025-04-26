#include "main.h"

class Student {
private:
	string name;
	int age;
	int countMark;
	int* marks;
	bool alive;

	string getAllMarks();

public:
	Student() : Student("no name", 13, 10, true) {}
	Student(string name) : Student(name, 13, 0, true) {}
	Student(string nm, int a) : Student(nm, a, 0, true) {}
	Student(string name, int age, int countMark, bool alive);
	Student(const Student& student) : Student(student.name, student.age,
		student.countMark, student.alive) {}
	~Student();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	int getCountMark();
	int* getMarks();
	bool isAlive();
	void setAlive(bool alive);
	int getMark(int index);
	void setMark(int index, int mark);

	string toString();
};