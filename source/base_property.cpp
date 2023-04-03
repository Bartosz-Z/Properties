#include "base_property.h"

template < class T >
BaseProperty<T>::BaseProperty(const T& value)
	: value(value) {}

template < class T >
void BaseProperty<T>::set(const T& value)
{
	this->value = value;
	for (const auto& binding : bindings)
		binding.observe(this->value);
}