#ifndef PROPERTY_BINDING_H
#define PROPERTY_BINDING_H

template < class T >
class PropetyBinding
{
public:
	PropetyBinding(T (*getter)());

	T get() const { return getter(); }

private:
	T (*getter)();
};

#endif