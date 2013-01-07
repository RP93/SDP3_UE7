///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Navi.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for Decorator_Navi.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef DECORATOR_NAVI_H
#define DECORATOR_NAVI_H

#include "Decorator.h"

int const naviPrice = 2000;

class Decorator_Navi :
	public Decorator
{
public:
	Decorator_Navi(ICar* car);
	void Print(std::ostream& stream);
};

#endif