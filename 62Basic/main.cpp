#include "Integer.h"
#include <iostream>
using namespace std;
// mult -- multiply
// sub -- substract
// div -- divide
int main()
{

	Integer a;

	Integer b(1321312);

	a.setNumber(5555);

	Integer add = a.add(b);

	Integer sub = a.sub(b);

	Integer div = a.div(b);

	Integer mult = a.mult(b);
	

cout << "Number a = " << a.getNumber() << endl;
cout << "----------------------" << endl;
cout << "Number b = " << b.getNumber() << endl;
cout << "----------------------" << endl;
cout << "add: " << a.getNumber() << "+" << b.getNumber() 
<< " = " << add.getNumber() << endl;

cout << "----------------------" << endl;
cout << "substract: " << a.getNumber() << "-" << b.getNumber()
<< " = " << sub.getNumber() << endl;
cout << "----------------------" << endl;
cout << "divide: " << a.getNumber() << "/" << b.getNumber()
<< " = " << div.getNumber() << endl;
cout << "----------------------" << endl;
cout << "multiply: " << a.getNumber() << "*" << b.getNumber() 
<< " = " << mult.getNumber() << endl;
cout << "----------------------" << endl;
	

	return 0;
}