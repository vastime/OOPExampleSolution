#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	// fields
	string name;
	int age;
	int* marks;
	int countMarks;
	bool alive;

	// constructors

	// default-constructors or constructors without arguments
	Student() : Student("no name", 13, 0, true) {
		cout << "default-constructor..." << endl;
	}

	// constructor with arguments
	Student(string name) : Student(name, 13) {
		cout << "constructor with arguments (name)..." << endl;
	}

	// constructor with arguments
	Student(string name, int age) : Student(name, age, 0, true) {
		cout << "constructor with arguments (name, age)..." << endl;
	}

	// canonical-constructor
	Student(string name, int age, int countMark, bool alive) {
		cout << "canonical-constructor ..." << endl;
		this->name = name;
		this->age = age;
		this->countMarks = countMark;
		marks = new int[countMark];

		for (int i = 0; i < countMark; i++)
		{
			marks[i] = 4;
		}

		this->alive = alive;
	}

	// copy-constructor
	Student(const Student& student) : Student(student.name,
		student.age, student.countMarks, student.alive)
	{
		cout << "copy-constructor ..." << endl;

		for (int i = 0; i < countMarks; i++)
		{
			marks[i] = student.marks[i];
		}
	}

	// destructor
	~Student() {
		cout << "destructor..." << endl;

		if (countMarks > 0) {
			delete[] this->marks;
		}
	}

	// methods
	string toString() {
		string s = "Name: " + this->name;
		s += ", age: " + to_string(this->age);
		s += ", marks " + this->convert();
		s += ", alive: ";
		s += this->alive ? "yes" : "no";
		return s;
	}

	string convert() {
		string s = "[";

		if (this->countMarks > 0) {
			for (int i = 0; i < this->countMarks - 1; i++)
			{
				s += to_string(this->marks[i]) + ", ";
			}

			s += to_string(this->marks[this->countMarks - 1]);
		}

		s += "]";

		return s;
	}

	int getMark(int index) {
		if (countMarks == 0 || index < 0
			|| index >= countMarks) {
			return -1;
		}

		return marks[index];
	}

	void setMark(int index, int mark) {
		if (countMarks == 0 || index < 0 || index >= countMarks
			|| mark < 0 || mark > 10) {
			return;
		}

		marks[index] = mark;
	}
};