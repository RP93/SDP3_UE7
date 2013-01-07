///////////////////////////////////////////////////////////////////////////
// Workfile : PremiumCar.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for PremiumCar.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef PREMIUMCAR_H
#define PREMIUMCAR_H

#include <string>
#include "ConcreteCar.h"

std::size_t const pricePremiumCar = 45000;

class PremiumCar :
	public ConcreteCar
{
public:
	PremiumCar(std::string manufacturer, std::string type);
	void Print(std::ostream& stream);
};

#endif