#include "ArrayList.h"


ArrayList::ArrayList() {
    array = nullptr;
    size = 0;
}
ArrayList::~ArrayList()
{
    if (array != nullptr) {
        delete[] array;
    }
}


void ArrayList::add(int value)
{

    int* newArray = new int[size + 1];

    if (array != nullptr)
    {
        /*copy(array, array + size, newArray);*/

        for (int i = 0; i < size; i++)
        {
            array[i] = newArray[i];
        }

        delete[] array;
    }
    newArray[size] = value;
    array = newArray;
    size++;
}

void ArrayList::add(int index, int value)
{
    int* newArray = new int[size + 1];

    if (array != nullptr && index > 0)
    {
        /*copy(array, array + size, newArray);*/

        for (int i = 0; i < size; i++)
        {
            if (i == index) {
                newArray[i] = value;
            }
            else { array[i] = newArray[i]; }
        }

        delete[] array;
    }
    array = newArray;
    size++;
}
void ArrayList::addAll(int* values, int size)
{
    if (values == nullptr || size <= 0) { return; }
    for (int i = 0; i < size; i++)
    {
        add(values[i]);
    }
    this->size += size;
}
void ArrayList::addAll(int index, int* values, int size)
{
    if (values == nullptr || size <= 0) { return; }
    for (int i = 0; i < size; i++)
    {
        add(index + i, values[i]);
    }
    this->size += size;
}


void ArrayList::remove(int value)
{
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] == value) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        int* newArray = new int[size - 1];

        for (int i = 0; i < index; i++) {
            newArray[i] = array[i];
        }

        for (int i = index + 1; i < size; i++) {
            newArray[i - 1] = array[i];
        }

        delete[] array;
        array = newArray;
        size--;
    }
}
void ArrayList::remove()
{
    if (size == 0) return;

    int* newArray = new int[size - 1];

    for (int i = 0; i < size - 1; i++) {
        newArray[i] = array[i];
    }

    delete[] array;
    array = newArray;
    size--;
}


int ArrayList::get(int index, int size)
{
    if (array == nullptr || index < 0 || index >= size) {
        return 0;
    }
    return array[index];
}
void ArrayList::set(int index, int value)
{
    if (array == nullptr || index < 0 || index >= size) {
        return;
    }
    array[index] = value;
}


void ArrayList::clear()
{
    if (array != nullptr) {
        delete[] array;

        array = nullptr;
        size = 0;
    }
}
string ArrayList::toString()
{
    string s = "[ ";
    for (int i = 0; i < size; i++) {
        if (i != 0) { s += ", "; }
        s += array[i];
    }
    return s += "]";
}

int ArrayList::getLength() {
    return size;
}
bool ArrayList::isEmpty() {
    return getLength() == 0;
}