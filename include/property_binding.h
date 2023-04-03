#ifndef PROPERTY_BINDING_H
#define PROPERTY_BINDING_H

#include <vector>
#include "observable.h"

template < class T >
class PropetyBinding : public Observable<T>
{
public:
	PropetyBinding(T (*getter)());

	T get() const { return getter(); }
	void observe(const T& value) override;

private:
	T (*getter)();
	std::vector< Observable<T> > observables;
};

#endif