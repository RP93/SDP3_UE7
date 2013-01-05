 
///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Header for Decorator.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef DECORATOR_H
#define DECORATOR_H

#include <string>
#include <fstream>
#include "Object.h"
#include "ICar.h"

class Decorator :
	public Object
{
public:
	std::string GetManufacturer();
	int GetPrice();
	std::string GetType();
	void Print(std::ostream& stream);
	
protected:
	Decorator(ICar* car, int price);
	//default ctor
	Decorator(){}

private:
	ICar* mComp;
	int mPrice;
};

#endif