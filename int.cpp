#include "int.h"
#include <iostream>

Int::Int()
{
	m_value = 0;
}

Int::Int(int value)
{
	m_value = value;
}

Int::~Int()
{

}

Int Int::sum(int value)
{
	return Int(m_value + value);
}

Int Int::sum(Int value)
{
	return sum(value.getValue());
}

Int Int::subtraction(int value)
{
	return Int(m_value - value);
}

Int Int::subtraction(Int value)
{
	return subtraction(value.getValue());
}

Int Int::multiply(int value)
{
	return Int(m_value * value);
}

Int Int::multiply(Int value)
{
	return multiply(value.getValue());
}

Int Int::divide(int value)
{
	if (value == 0)
	{
		return *this;
	}
	return Int(m_value / value);
}

Int Int::divide(Int value)
{
	return divide(value.getValue());
}

int Int::getValue()
{
	return m_value;
}

void Int::print()
{
	std::cout << m_value << std::endl;
}

const Int Int::operator+(Int rv)
{
	return sum(rv.getValue());
}

const Int Int::operator-(Int rv)
{
	return subtraction(rv.getValue());
}

const Int Int::operator*(Int rv)
{
	return multiply(rv.getValue());
}

const Int Int::operator/(Int rv)
{
	return divide(rv.getValue());
}

Int& operator+=(Int& lv, Int rv)
{
	lv.m_value = lv.sum(rv.getValue()).getValue();
	return lv;
}

Int& operator-=(Int& lv, Int rv)
{
	lv.m_value = lv.subtraction(rv.getValue()).getValue();
	return lv;
}

Int& operator*=(Int& lv, Int rv)
{
	lv.m_value = lv.multiply(rv.getValue()).getValue();
	return lv;
}

Int& operator/=(Int& lv, Int rv)
{
	lv.m_value = lv.divide(rv.getValue()).getValue();
	return lv;
}

std::ostream& operator<<(std::ostream& out, Int rv)
{
	out << rv.getValue();
	return out;
}