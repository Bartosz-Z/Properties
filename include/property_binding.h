#ifndef PROPERTY_BINDING_H
#define PROPERTY_BINDING_H

#include <memory>
#include <vector>
#include "observable.h"

class DoublePropetyBinding : public ObservableDouble
{
public:
	DoublePropetyBinding(double (*getter)());

	double get() const { return getter(); }
	void observe(double value) override;
	void addObserver(const std::shared_ptr< ObservableDouble >& observable) override;

private:
	double (*getter)();
	std::vector< std::shared_ptr< ObservableDouble > > observables;
};

#endif