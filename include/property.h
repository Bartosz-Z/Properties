#ifndef PROPERTY_H
#define PROPERTY_H

#include <memory>
#include <vector>

template < class T >
class Property
{
public:
	Property(const T& value);

	T get() const { return value; }
	void set(const T& value);

private:
	T value;
	std::vector< std::shared_ptr< T(*)() > > bindings;
};

#endif