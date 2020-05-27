#ifndef __INT_H
#define __INT_H
#include <iostream>

class Int
{
public:
	Int();
	Int(int value);
	~Int();

	Int sum(int value);
	Int sum(Int value);
	Int subtraction(int value);
	Int subtraction(Int value);
	Int multiply(int value);
	Int multiply(Int value);
	Int divide(int value);
	Int divide(Int value);

	int getValue();

	void print();

	const Int operator+(Int rv);
	const Int operator-(Int rv);
	const Int operator*(Int rv);
	const Int operator/(Int rv);

	friend Int& operator+=(Int& lv, Int rv);
	friend Int& operator-=(Int& lv, Int rv);
	friend Int& operator*=(Int& lv, Int rv);
	friend Int& operator/=(Int& lv, Int rv);

	friend std::ostream& operator<<(std::ostream& out, Int rv);

private:
	int m_value;
};

#endif

