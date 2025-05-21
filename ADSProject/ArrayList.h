#include <iostream>
#include <string>

using namespace std;
class ArrayList
{
private:
    int* array;
    int size;
public:
    ArrayList();
    ~ArrayList();


    void add(int value);
    void add(int index, int value);
    void addAll(int* values, int size);
    void addAll(int index, int* values, int size);


    void remove(int value);
    void remove();

    int get(int index, int size);
    void set(int index, int value);


    void clear();
    string toString();

    int getLength();
    bool isEmpty();
};