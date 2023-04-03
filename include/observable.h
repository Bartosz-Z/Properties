#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <memory>

class ObservableDouble
{
public:
	virtual ~ObservableDouble();

	virtual void observe(double value) = 0;
	virtual void addObserver(const std::shared_ptr< ObservableDouble >& observable) = 0;

protected:
	ObservableDouble();
};

#endif