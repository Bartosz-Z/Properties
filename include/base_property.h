#ifndef BASE_PROPERTY_H
#define BASE_PROPERTY_H

#include <memory>
#include <vector>
#include "observable.h"

class BaseDoubleProperty : public ObservableDouble
{
public:
	BaseDoubleProperty(double value);

	double get() const { return value; }
	void set(double value);
	void observe(double value) override { set(value); }
	void addObserver(const std::shared_ptr< ObservableDouble >& observable) override;

private:
	double value;
	std::vector< std::shared_ptr< ObservableDouble > > observables;
};

#endif