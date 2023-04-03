#ifndef PROPERTY_H
#define PROPERTY_H

#include <memory>
#include <vector>
#include "property_binding.h"

template < class T >
class Property : public Observable<T>
{
public:
	Property(const T& value);

	T get() const { return value; }
	void set(const T& value);
	void observe(const T& value) override { set(value); }

private:
	T value;
	std::vector< std::shared_ptr< PropetyBinding<T> > > bindings;
};

#endif