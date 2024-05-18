#include<iostream>
#include"BoundedInteger.h"
using namespace std;
int main()
{
	BoundedInteger bi(5, 12, 7);
	bi.decrement(4);//3
	bi.getValue();//
	bi.increment(10);
	return 0;
}