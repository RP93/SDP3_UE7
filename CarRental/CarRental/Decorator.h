 
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
	public Object,
	public ICar
{
public:
	virtual ~Decorator();
	std::string GetManufacturer() const;
	int GetPrice() const;
	std::string GetType() const;
	void Print(std::ostream& stream) = 0;
	
protected:
	ICar* mComp;
	int mPrice;
};

#endif