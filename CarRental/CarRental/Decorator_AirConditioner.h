///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_AirConditioner.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for Decorator_AirConditioner.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef DECORATOR_AIRCONDITIONER_H
#define DECORATOR_AIRCONDITIONER_H

#include "Decorator.h"

int const airConditionerPrice = 1500;

class Decorator_AirConditioner :
	public Decorator
{
public:
	Decorator_AirConditioner(ICar* car);
	void Print(std::ostream& stream);
};

#endif