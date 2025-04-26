#include "main.h"

class Student {
private:
	string name;
	int age;
	int countMark;
	int* marks;
	bool alive;

public:
	string getName() { return name; }
	void setName(string name) { this->name = name; }

	int getAge() { return age; }
	void setAge(int age) {
		if (age >= 13 && age <= 18) {
			this->age = age;
		}
	}

	int getCountMark() { return countMark; }

	int* getMarks() {
		return marks;
	}

	bool isAlive() { return alive; }
	void setAlive(bool alive) { this->alive = alive; }

	// default-constructor or constructor without argumnets
	Student() : Student("no name", 13, 10, true) {
		//cout << "Default-constructor..." << endl;		
	}

	// constructor with arguments
	Student(string name) : Student(name, 13, 0, true) {
		//cout << "constructor with arguments..." << endl;

	}

	// constructor with arguments
	Student(string nm, int a) : Student(nm, a, 0, true) {
		//cout << "constructor with arguments..." << endl;
	}

	// canonical-constructor
	Student(string name, int age, int countMark, bool alive) {
		//cout << "canonical-constructor..." << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		this->countMark = countMark;
		marks = new int[countMark];
		for (int i = 0; i < countMark; i++)
		{
			marks[i] = 4;
		}
	}

	// copy-constructor
	Student(const Student& student) : Student(student.name, student.age,
		student.countMark, student.alive) {
		//cout << "copy-constructor..." << endl;
	}

	// destructor
	~Student() {
		//cout << "destructor..." << endl;

		if (marks != nullptr) {
			delete[] marks;
		}
	}

	string toString() {
		string s = "Name: " + this->name;
		s += ", age: " + to_string(this->age);
		s += ", marks: " + getAllMarks();
		s += ", alive: ";
		s += (this->alive ? "yes" : "no");
		return s;
	}

	string getAllMarks() {
		if (countMark == 0) {
			return "[]";
		}

		string s = "";

		for (int i = 0; i < countMark; i++)
		{
			s += to_string(marks[i]) + " ";
		}

		return s;
	}

	int getMark(int index) {
		return index < 0 || index >= countMark || !marks ? 0 : marks[index];
	}

	void setMark(int index, int mark) {
		if (index >= 0 && index < countMark && marks) {
			marks[index] = mark;
		}
	}

};