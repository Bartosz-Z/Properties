#include "property_binding.h"

template < class T >
PropetyBinding<T>::PropetyBinding(T (*getter)())
	: getter(getter) {}

template < class T >
void PropetyBinding<T>::observe(const T& value)
{
	for (const auto& observable : observables)
		observable.observe(getter());
}