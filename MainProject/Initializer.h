#include "Student.h"
class Initializer {
public:
	void init(Student*& list, int count) {
		if (list == nullptr && count > 0)
		{
			list = new Student[count];
		}
		string names[]{ "Anna","Vanya","Alex","Vlad","Matvey"
			,"Timofey","Nikita","Vladimir","Bogdan","Timur"
			,"Rodion","Alexey","Daniil","Victor","Kate","Alice"
			,"Maks" };
		int minMark = 0;
		int maxMark = 10;

		int minAge = 13;
		int maxAge = 18;
		for (int i = 0; i < count; i++)
		{
			list[i].name = names[rand() % 17];
			list[i].age = rand() % (maxAge - minAge + 1) + minAge;
			for (int j = 0; j < list[i].countMarks; j++)
			{
				list[i].marks[j] = rand() % (maxMark - minMark + 1)
					+ minMark;
			}
		}
	}
};
