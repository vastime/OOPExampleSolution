#include "Group.h"

Group::Group() {
	count = 0;
	list = nullptr;
}

Group::Group(Student* list, int count) {
	if (list != nullptr && count > 0) {
		list = new Student[count];

		this->count = count;

		for (int i = 0; i < count; i++)
		{
			this->list[i] = list[i];
		}
	}
}

Group::~Group() {
	if (list != nullptr) {
		delete[] list;
	}
}

Student Group::getStudent(int index) {
	if (index >= 0 && index < count) {
		return list[index];
	}

	return Student("", 0, 0, false);
}

// ...
//void Group::add(Student student) {
//
//}
//
//void Group::remove(Student student) {
//
//}
//
//void Group::remove(int index) {
//
//}

void Group::set(Student st1, Student st2) {
	for (int i = 0; i < count; i++)
	{
		if (st1.getName() == list[i].getName()
			&& st1.getAge() == list[i].getAge()
			&& st1.isAlive() == list[i].isAlive()) {
			list[i] = st2;
		}
	}
}

void Group::set(int index, Student st2) {
	if (index >= 0 && index < count) {
		list[index] = st2;
	}
}

int Group::getCount() {
	return count;
}

string Group::toString() {
	string s = "";

	for (int i = 0; i < count; i++)
	{
		s += list[i].toString();
	}

	return s;
}