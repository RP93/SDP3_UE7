///////////////////////////////////////////////////////////////////////////
// Workfile : ConcreteCar.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for ConcreteCar.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CONCRETECAR_H
#define CONCRETECAR_H

#include <fstream>
#include <string>
#include "Object.h"
#include "ICar.h"

class ConcreteCar :
	public Object,
	public ICar
{
public:
	std::string GetManufacturer() const;
	int GetPrice() const;
	std::string GetType() const;
	virtual void Print(std::ostream& stream) = 0;

protected:
	std::string mManufacturer;
	int mPrice;
	std::string mType;
};

#endif