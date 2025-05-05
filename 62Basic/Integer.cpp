#include "Integer.h"
// mult -- multiply
// sub -- substract
// div -- divide


Integer::Integer(int number)
{
	this -> number = number;
}



Integer Integer::add(Integer in)
{
	Integer num;
	num.number = number + in.number;
	return num;
}



Integer Integer::sub(Integer in)
{
	Integer num;
	num.number = number - in.number;
	return num;
}


Integer Integer::div(Integer in)
{
	Integer num;
	num.number = number/in.number;
	return num;
}


Integer Integer::mod(Integer in)
{
	Integer num;
	num.number = number%in.number;
	return num;
}


Integer Integer::mult(Integer in)
{
	Integer num;
	num.number = number*in.number;
	return num;
}



void Integer::setNumber(int number)
{
	this -> number = number;
}


int Integer::getNumber()
{
	return number;
}
