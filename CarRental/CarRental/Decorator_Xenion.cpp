///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Xenion.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator_Xenion
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Decorator_Xenion.h"

Decorator_Xenion::Decorator_Xenion(ICar* car)
{
	try
	{
		if(car == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		mComp = car;
		mPrice = xenionPrice;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Xenion::Decorator_Xenion: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Xenion::Decorator_Xenion: Unknown Exception occured" << std::endl;
	}
}

void Decorator_Xenion::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		mComp->Print(stream);
		stream << "Xenion" << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Xenion::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Xenion::Print: Unknown Exception occured" << std::endl;
	}
}