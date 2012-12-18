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
	~ICar() {};

	virtual int GetPrice() = 0;
	virtual void Print(std::ostream& ost) = 0;
	virtual std::string GetManufacturer() = 0;
	virtual std::string GetType() = 0;
};

#endif