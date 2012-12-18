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

typedef std::list<Car*> TCarList;

class CarRental
{
public:
	//Destructor
	virtual ~CarRental();
	
	void Add(Car* c);
	void PrintAvailable(std::ostream& ost);
	void PrintReserved(std::ostream& ost);
	TCarList GetAvailable(std::string const& type="", std::string const& manufacturer="");
	TCarList GetReserved(std::string const& type="", std::string const& manufacturer="");
	void Reserve(Car* c);
	void MoveToAvailable(Car* c);
	
private:
	TCarList mAvailableCars;
	TCarList mReservedCars;
};

#endif