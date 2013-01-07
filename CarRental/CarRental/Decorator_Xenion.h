///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Xenion.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for Decorator_Xenion.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef DECORATOR_XENION_H
#define DECORATOR_XENION_H

#include "Decorator.h"

int const xenionPrice = 3000;

class Decorator_Xenion :
	public Decorator
{
public:
	Decorator_Xenion(ICar* car);
	void Print(std::ostream& stream);
};

#endif