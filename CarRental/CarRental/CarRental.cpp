///////////////////////////////////////////////////////////////////////////
// Workfile : CarRental.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 18.12.2012
// Description : Implementation of class CarRental
///////////////////////////////////////////////////////////////////////////

#include <algorithm>
#include <iostream>
#include <string>
#include "CarRental.h"


CarRental::~CarRental() 
{
	std::for_each(mReservedCars.begin(),mReservedCars.end(),[&](ICar* m)
	{
		delete m;
	});
	std::for_each(mReservedCars.begin(),mReservedCars.end(),[&](ICar* m)
	{
		delete m;
	});
}

void CarRental::Add(ICar* c)
{
	try
	{
		if(c == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		mAvailableCars.push_back(c);
	}
	catch (std::string const& error)
	{
		std::cout << "Error in CarRental::Add: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "CarRental::Add: Unknown Exception occured" << std::endl;
	}
}

void CarRental::PrintAvailable(std::ostream& ost) const
{
	try
	{
		if(ost == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}

		std::for_each(mAvailableCars.begin(),mAvailableCars.end(),[&](ICar* m)
		{
			m->Print(ost);
			ost << "Total price: " << m->GetPrice() << std::endl;
		});
	}
	catch (std::string const& error)
	{
		std::cout << "Error in CarRental::PrintAvailable: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "CarRental::PrintAvailable: Unknown Exception occured" << std::endl;
	}
}

void CarRental::PrintReserved(std::ostream& ost) const
{
	try
	{
		if(ost == 0)
		{
			std::string error = "no valid stream";
			throw (error); 
		}

		std::for_each(mReservedCars.begin(),mReservedCars.end(),[&](ICar* m)
		{
			m->Print(ost);
			ost << "Total price: " << m->GetPrice() << std::endl;
		});
	}
	catch (std::string const& error)
	{
		std::cout << "Error in CarRental::PrintReserved: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "CarRental::PrintReserved: Unknown Exception occured" << std::endl;
	}
}

TCarList CarRental::GetAvailable(std::string const& type, std::string const& manufacturer) const
{
	TCarList carList;

	std::for_each(mAvailableCars.begin(),mAvailableCars.end(),[&](ICar* m)
	{
		if(m->GetManufacturer() == manufacturer && m->GetType() == type)
		{
			carList.push_back(m);
		}
	});

	return carList;
}

TCarList CarRental::GetReserved(std::string const& type, std::string const& manufacturer) const
{
	TCarList carList;

	std::for_each(mReservedCars.begin(),mReservedCars.end(),[&](ICar* m)
	{
		if(m->GetManufacturer() == manufacturer && m->GetType() == type)
		{
			carList.push_back(m);
		}
	});

	return carList;
}

void CarRental::Reserve(ICar* c)
{
	try
	{
		if(c == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		TCarListItor itor = std::find(mAvailableCars.begin(),mAvailableCars.end(),c);

		if(itor == mAvailableCars.end())
		{
			std::string error = "car not found";
			throw (error);
		}

		mReservedCars.push_back(*itor);
		mAvailableCars.remove(*itor);
	}
	catch (std::string const& error)
	{
		std::cout << "Error in CarRental::Reserve: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "CarRental::Reserve: Unknown Exception occured" << std::endl;
	}
}

void CarRental::MoveToAvailable(ICar* c)
{
	try
	{
		if(c == 0)
		{
			std::string error = "no valid pointer";
			throw (error); 
		}
		TCarListItor itor = std::find(mReservedCars.begin(),mReservedCars.end(),c);

		if(itor == mReservedCars.end())
		{
			std::string error = "car not found";
			throw (error);
		}

		mAvailableCars.push_back(*itor);
		mReservedCars.remove(*itor);		
	}
	catch (std::string const& error)
	{
		std::cout << "Error in CarRental::MoveToAvailable: " << error << std::endl;
	}
	catch(...)
	{
		std::cerr << "CarRental::MoveToAvailable: Unknown Exception occured" << std::endl;
	}
}