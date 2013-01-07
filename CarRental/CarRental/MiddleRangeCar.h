///////////////////////////////////////////////////////////////////////////
// Workfile : MiddleRangeCar.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for MiddleRange.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef MIDDLERANGECAR_H
#define MIDDLERANGECAR_H

#include <string>
#include "ConcreteCar.h"

std::size_t const priceMiddleRangeCar = 16000;

class MiddleRangeCar :
	public ConcreteCar
{
public:
	MiddleRangeCar(std::string manufacturer, std::string type);
	void Print(std::ostream& stream);
};

#endif