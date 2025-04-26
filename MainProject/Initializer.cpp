#include "Initializer.h"

void Initializer::init(Student*& list, int count) {
	if (list == nullptr && count > 0) {
		list = new Student[count];
	}

	string names[]{ "Anna", "Alex", "Vlad" , "Matvey" ,
		"Ivan" , "Timur", "Timofey", "Nikita", "Vladimir",
		"Bogdan", "Rodion", "Alexey", "Daniil",
		"Victor", "Kate", "Alice", "Maks" };

	int minMark = 4;
	int maxMark = 10;

	int minAge = 13;
	int maxAge = 18;

	for (int i = 0; i < count; i++)
	{
		list[i].setName(names[rand() % 17]);
		list[i].setAge(rand() % (maxAge - minAge + 1) + minAge);
		for (int j = 0; j < list[i].getCountMark(); j++)
		{
			//list[i].getMarks()[j] = rand() % (maxMark - minMark + 1) + minMark;
			*(list[i].getMarks() + j) = rand() % (maxMark - minMark + 1) + minMark;
		}
	}
}