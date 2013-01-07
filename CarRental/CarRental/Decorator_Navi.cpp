///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Navi.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator_Navi
///////////////////////////////////////////////////////////////////////////

#include "Decorator_Navi.h"
#include <iostream>

Decorator_Navi::Decorator_Navi(ICar* car)
{
	try
	{
		if(car == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		mComp = car;
		mPrice = naviPrice;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Navi::Decorator_Navi: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Navi::Decorator_Navi: Unknown Exception occured" << std::endl;
	}
}

void Decorator_Navi::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		mComp->Print(stream);
		stream << "Navi" << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Navi::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Navi::Print: Unknown Exception occured" << std::endl;
	}
}