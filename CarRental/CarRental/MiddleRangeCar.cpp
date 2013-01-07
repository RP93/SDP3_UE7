///////////////////////////////////////////////////////////////////////////
// Workfile : MiddleRangeCar.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class MiddleRangeCar
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "MiddleRangeCar.h"

MiddleRangeCar::MiddleRangeCar(std::string manufacturer, std::string type)
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
		mPrice = priceMiddleRangeCar;
		mType = type;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in MiddleRangeCar::MiddleRangeCar: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "MiddleRangeCar::MiddleRangeCar: Unknown Exception occured" << std::endl;
	}
}
	
void MiddleRangeCar::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		stream << "Middlerange Car: " << mManufacturer << " " << mType 
			   << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in MiddleRangeCar::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "MiddleRangeCar::Print: Unknown Exception occured" << std::endl;
	}
}