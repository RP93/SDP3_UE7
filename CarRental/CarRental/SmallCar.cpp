///////////////////////////////////////////////////////////////////////////
// Workfile : SmallCar.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class SmallCar
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "SmallCar.h"

SmallCar::SmallCar(std::string manufacturer, std::string type)
{
	try
	{
		if(manufacturer == "")
		{
			std::string error = "no valid manufacturer";
			throw (error); 
		}
		if(type == "")
		{
			std::string error = "no valid type";
			throw (error); 
		}
		mManufacturer = manufacturer;
		mPrice = priceSmallCar;
		mType = type;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in SmallCar::SmallCar: " << error << std::endl;
	}
}
	
void SmallCar::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		stream << "Small Car: " << mManufacturer << " " << mType 
			   << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in SmallCar::Print: " << error << std::endl;
	}
}