#include <iostream>
#include <string>
using namespace std;

void test(int*& array, int size) {
	if (array == nullptr && size > 0)
	{
		array = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		*(array + i) = 1;
	}
}
string convert(int* array, int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}
int main() {
	int size = 10;
	int* array = nullptr;

	cout << "Before:" << convert(array, size) << endl;

	test(array, size);

	cout << "After:" << convert(array, size) << endl;

	return 0;
}