#ifndef BASE_PROPERTY_H
#define BASE_PROPERTY_H

#include <memory>
#include <vector>
#include "property_binding.h"

template < class T >
class BaseProperty : public Observable<T>
{
public:
	BaseProperty(const T& value);

	T get() const { return value; }
	void set(const T& value);
	void observe(const T& value) override { set(value); }

private:
	T value;
	std::vector< std::shared_ptr< PropetyBinding<T> > > bindings;
};

#endif