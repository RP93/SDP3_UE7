///////////////////////////////////////////////////////////////////////////
// Workfile : SUV.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for SUV.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef SUV_H
#define SUV_H

#include <string>
#include "ConcreteCar.h"

std::size_t const priceSUV = 22000;

class SUV :
	public ConcreteCar
{
public:
	SUV(std::string manufacturer, std::string type);
	void Print(std::ostream& stream);
};

#endif