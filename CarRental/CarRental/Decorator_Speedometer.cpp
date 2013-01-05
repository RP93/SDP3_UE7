///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Speedometer.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator_Speedometer
///////////////////////////////////////////////////////////////////////////

#include "Decorator_Speedometer.h"

Decorator_Speedometer::Decorator_Speedometer(ICar* car, int price)
{
}

int Decorator_Speedometer::GetPrice()
{
	return mPrice;
}

void Decorator_Speedometer::Print(std::ostream& stream)
{
}