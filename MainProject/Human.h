#include "main.h"
class Human
{
private:

public:
	string name;
	bool gender;
	int age;


	Human();
	Human(string name, int age, bool gender);
	Human(const Human& human);	
	~Human();

	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
	bool isGender();
	void setGender(bool gender);

	string toString();
};

