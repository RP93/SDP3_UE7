///////////////////////////////////////////////////////////////////////////
// Workfile : SmallCar.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for SmallCar.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef SMALLCAR_H
#define SMALLCAR_H

#include <string>
#include "ConcreteCar.h"

std::size_t const priceSmallCar = 7500;

class SmallCar :
	public ConcreteCar
{
public:
	SmallCar(std::string manufacturer, std::string type);
	void Print(std::ostream& stream);
};

#endif