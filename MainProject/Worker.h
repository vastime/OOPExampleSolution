#pragma once
#include "Human.h"
class Worker : public Human
{
public:
	double salary;
	string company;
	
	Worker();
	Worker(string name, int age, bool gender, double salary, string company);
	Worker(const Worker& worker);
	~Worker();


	double getSalary();
	void setSalary(double salary);
	string getCompany();
	void setCompany(string company);
	string toString();
};

