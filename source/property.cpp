#include "property.h"

DoubleProperty::DoubleProperty(double value)
	: base_property(std::make_shared< BaseDoubleProperty >(value)) {}

void DoubleProperty::bind(const std::shared_ptr< ObservableDouble >& observable)
{
	observable->addObserver(base_property);
}

void DoubleProperty::bind(const DoubleProperty& prop)
{
	prop.base_property->addObserver(base_property);
}