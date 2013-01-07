///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Speedometer.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for Decorator_Speedometer.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef DECORATOR_SPEEDOMETER_H
#define DECORATOR_SPEEDOMETER_H

#include "Decorator.h"

int const speedometerPrice = 2500;

class Decorator_Speedometer :
	public Decorator
{
public:
	Decorator_Speedometer(ICar* car);
	void Print(std::ostream& stream);
};

#endif