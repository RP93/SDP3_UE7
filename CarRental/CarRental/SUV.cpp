///////////////////////////////////////////////////////////////////////////
// Workfile : SUV.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 6.11.2012
// Description : Implementation of class SUV
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "SUV.h"

SUV::SUV(std::string manufacturer, std::string type)
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
		mPrice = priceSUV;
		mType = type;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in SUV::SUV: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "SUV::SUV: Unknown Exception occured" << std::endl;
	}
}
	
void SUV::Print(std::ostream& stream)
{
	try
	{
		if(stream == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}
		stream << "SUV: " << mManufacturer << " " << mType 
			   << " - Price: " << mPrice << std::endl;
	}
	catch (std::string const& error)
	{
		std::cout << "Error in SUV::Print: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "SUV::Print: Unknown Exception occured" << std::endl;
	}
}