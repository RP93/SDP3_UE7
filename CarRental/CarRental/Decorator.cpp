 
///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Decorator.h"

Decorator::Decorator(ICar* car, int price)
{
	try
	{
		if(car == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		if(price < 0)
		{
			std::string error = "no valid price";
			throw (error); 
		}
		mComp = car;
		mPrice = price;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator::Decorator: " << error << std::endl;
	}
}

std::string Decorator::GetManufacturer() const
{
	return mComp->GetManufacturer();
}

//returns the price of the whole car (incl. all decorators)
int Decorator::GetPrice() const
{
	return mPrice + mComp->GetPrice();
}

std::string Decorator::GetType() const
{
	return mComp->GetType();
}