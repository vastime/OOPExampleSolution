#include "Queue.h"

Queue::Queue() {
	queue = nullptr;
	size = 0; 
}

Queue::~Queue() {
	if (queue != nullptr) {
		delete[] queue;
	}
}
void Queue::enqueue(int element) {
	if (isEmpty())
	{
		size = 1;
		queue = new int[size];
		queue[0] = element;
	}
	else
	{
		int* temp = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = queue[i];
				
		}
		temp[size] = element;
		size++;
		delete[] queue;
		queue = temp;
	}

}
int Queue::dequeue() {
	if (!isEmpty())
	{
		int first = queue[0];
		size--;
		int* temp = new int[size];

		for (int i = 1; i < size; i++)
		{
			temp[i] = queue[i + 1];
		}
		delete[] queue;
		queue = temp;

			return first;
	}
	return 0;
}
int Queue::peek() {
	if (!isEmpty())
	{
		return queue[0];
	}
}
int Queue::getSize() {
	return size;
}
bool Queue::isEmpty() {
	return size == 0;
}
string Queue::toString() {
	string s = "Queue is empty. ";

	if (!isEmpty()) {
		s = "";
		for (int  i = 0; i < size; i++)
		{
			s += to_string(queue)
		}

	}
}