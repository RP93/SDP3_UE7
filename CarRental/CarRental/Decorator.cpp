 
///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Decorator.h"

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