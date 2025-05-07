#include "Student.h"
class Group
{
private:
	Student* list;
	int count;
public:
	Group();
	Group(Student* list, int count);
	~Group();

	Student getStudent(int index);
//void add(Student student);
//void remove(Student student);
//void remove(int index);
	void set(Student st1, Student st2);
	void set(int index, Student st2);
	int getCount();    
	string toString();
};

