///////////////////////////////////////////////////////////////////////////
// Workfile : Decorator_Speedometer.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class Decorator_Speedometer
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Decorator_Speedometer.h"

Decorator_Speedometer::Decorator_Speedometer(ICar* car)
{
	try
	{
		if(car == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		mComp = car;
		mPrice = speedometerPrice;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Speedometer::Decorator_Speedometer: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Speedometer::Decorator_Speedometer: Unknown Exception occured" << std::endl;
	}
}

void Decorator_Speedometer::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		mComp->Print(stream);
		stream << "Speedometer" << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in Decorator_Speedometer::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "Decorator_Speedometer::Print: Unknown Exception occured" << std::endl;
	}
}