///////////////////////////////////////////////////////////////////////////
// Workfile : CarRental.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.12.2012
// Description : Header for CarRental.cpp
///////////////////////////////////////////////////////////////////////////

#ifndef CARRENTAL_H
#define CARRENTAL_H

#include <list>
#include "ICar.h"

typedef std::list<ICar*> TCarList;

class CarRental
{
public:
	//Destructor
	virtual ~CarRental();
	
	void Add(ICar* c);
	void PrintAvailable(std::ostream& ost);
	void PrintReserved(std::ostream& ost);
	TCarList GetAvailable(std::string const& type="", std::string const& manufacturer="");
	TCarList GetReserved(std::string const& type="", std::string const& manufacturer="");
	void Reserve(ICar* c);
	void MoveToAvailable(ICar* c);
	
private:
	TCarList mAvailableCars;
	TCarList mReservedCars;
};

#endif