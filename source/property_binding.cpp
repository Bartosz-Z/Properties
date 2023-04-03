#include "property_binding.h"

template < class T >
PropetyBinding::PropetyBinding(T (*getter)())
	: getter(getter) {}