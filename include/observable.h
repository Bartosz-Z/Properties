#ifndef OBSERVABLE_H
#define OBSERVABLE_H

template < class T >
class Observable
{
public:
	virtual ~Observable();

	virtual void observe(const T& value) = 0;

protected:
	Observable();
};

#endif