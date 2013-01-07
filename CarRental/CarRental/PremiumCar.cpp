///////////////////////////////////////////////////////////////////////////
// Workfile : PremiumCar.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class PremiumCar
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "PremiumCar.h"

PremiumCar::PremiumCar(std::string manufacturer, std::string type)
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
		mPrice = pricePremiumCar;
		mType = type;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in PremiumCar::PremiumCar: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "PremiumCar::PremiumCar: Unknown Exception occured" << std::endl;
	}
}
	
void PremiumCar::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		stream << "Premium Car: " << mManufacturer << " " << mType 
			   << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in PremiumCar::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "PremiumCar::Print: Unknown Exception occured" << std::endl;
	}
}