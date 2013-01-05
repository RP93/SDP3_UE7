///////////////////////////////////////////////////////////////////////////
// Workfile : ConcreteCar.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class ConcreteCar
///////////////////////////////////////////////////////////////////////////

#include "ConcreteCar.h"

std::string ConcreteCar::GetManufacturer() const
{
	return mManufacturer;
}

int ConcreteCar::GetPrice() const
{
	return mPrice;
}

std::string ConcreteCar::GetType() const
{
	return mType;
}