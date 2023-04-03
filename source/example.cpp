#include <iostream>
#include "property.h"

int main()
{
	DoubleProperty a = DoubleProperty(0);
	DoubleProperty b = DoubleProperty(0);
	a.bind(b);
	b.set(3);
	std::cout << "a: " << a.get() << " b: " << b.get() << std::endl;
	b.set(1);
	std::cout << "a: " << a.get() << " b: " << b.get() << std::endl;
	return 0;
}