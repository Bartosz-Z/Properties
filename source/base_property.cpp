#include "base_property.h"

BaseDoubleProperty::BaseDoubleProperty(double value)
	: value(value) {}

void BaseDoubleProperty::set(double value)
{
	this->value = value;
	for (const auto& observable : observables)
		observable->observe(this->value);
}

void BaseDoubleProperty::addObserver(const std::shared_ptr< ObservableDouble >& observable)
{
	observables.emplace_back(observable);
}