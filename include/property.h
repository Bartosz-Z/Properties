#ifndef PROPERTY_H
#define PROPERTY_H

#include "base_property.h"

template < class T >
class Property
{
public:
	Property(const T& value);

private:
	std::shared_ptr< BaseProperty<T> > base_property;
};

#endif