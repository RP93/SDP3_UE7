///////////////////////////////////////////////////////////////////////////
// Workfile : ICar.h
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Interface
///////////////////////////////////////////////////////////////////////////

#ifndef ICAR_H
#define ICAR_H

class ICar
{
public:
	//virtual DTor
	virtual ~ICar() {};

	virtual int GetPrice() const = 0;
	virtual void Print(std::ostream& ost) = 0;
	virtual std::string GetManufacturer() const = 0;
	virtual std::string GetType() const = 0;
};

#endif