#ifndef PROPERTY_H
#define PROPERTY_H

#include "base_property.h"

class DoubleProperty
{
public:
	DoubleProperty(double value);

	double get() const { return base_property->get(); }
	void set(double value) { base_property->set(value); }
	void bind(const std::shared_ptr< ObservableDouble >& observable);
	void bind(const DoubleProperty& prop);

private:
	std::shared_ptr< BaseDoubleProperty > base_property;
};

#endif