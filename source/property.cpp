#include "property.h"

template < class T >
Property<T>::Property(const T& value)
	: value(value) {}

template < class T >
void Property<T>::set(const T& value)
{
	this->value = value;
	for (const auto& binding : bindings)
		binding.observe(this->value);
}