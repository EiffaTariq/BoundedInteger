#include<iostream>
#include "BoundedInteger.h"
using namespace std;
bool BoundedInteger::isValidBound(int lb, int ub)const
{
	if (lb <= ub)
	{
		return true;
	}
	else
	{
		return false;
	}
}
BoundedInteger::BoundedInteger()
{
	lowerBound = INT_MIN;
	upperBound = INT_MAX;
	value = lowerBound;
}
BoundedInteger::BoundedInteger(int lb, int ub)
{
	if (isValidBound(lb, ub) == 1)
	{
		lowerBound = lb;
		upperBound = ub;
		value = lowerBound;
	}
	else
	{
		lowerBound = INT_MIN;
		upperBound = INT_MAX;
		value = lowerBound;
	}
}
BoundedInteger::BoundedInteger(int lb, int ub, int val)
{
	if (isValidBound(lb, ub) == 1)
	{
		lowerBound = lb;
		upperBound = ub;
		value = val;
	}
	else
	{
		lowerBound = INT_MIN;
		upperBound = INT_MAX;
		value = val;
	}
}
void BoundedInteger::setValue(int val)
{
	if (val >= lowerBound && val <= upperBound)
	{
		value = val;
	}
}
int BoundedInteger::getValue()
{
	cout << "\n";
	return value;
}
int BoundedInteger::getLowerBound()
{
	return lowerBound;
}
int BoundedInteger::getUpperBound()
{
	return upperBound;
}
bool BoundedInteger::isValidValue()
{
	if (value >= lowerBound && value <= upperBound)
	{
		return true;
	}
}
void BoundedInteger::increment(int inc)
{
	value = value + inc;
	if (value >= upperBound)
	{
		value = value - upperBound;
		value = (value - 1) - lowerBound;
	}
	cout << value << "\n";
}
void BoundedInteger::decrement(int dec)
{
	value = value - dec;
	if (value <= lowerBound)
	{
		value = lowerBound - value;
		value = upperBound - (value - 1);
	}
	cout << value << "\n";
}