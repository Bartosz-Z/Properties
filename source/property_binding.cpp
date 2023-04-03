#include "property_binding.h"

DoublePropetyBinding::DoublePropetyBinding(double (*getter)())
	: getter(getter) {}

void DoublePropetyBinding::observe(double value)
{
	for (const auto& observable : observables)
		observable->observe(getter());
}

void DoublePropetyBinding::addObserver(const std::shared_ptr< ObservableDouble >& observable)
{
	observables.emplace_back(observable);
}