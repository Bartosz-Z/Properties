#include "property.h"

template < class T >
Property<T>::Property(const T& value)
	: base_property(std::make_shared< BaseProperty<T> >(value)) {}