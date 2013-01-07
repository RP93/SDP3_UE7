///////////////////////////////////////////////////////////////////////////
// Workfile : Main.cpp
// Author : Reinhard Penn, Bernhard Selymes
// Date : 02.01.2013
// Description : Testdriver for CarRental
///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <algorithm>
#include <vld.h>
#include "ICar.h"
#include "CarRental.h"
#include "Decorator.h"
#include "Decorator_AirConditioner.h"
#include "Decorator_Navi.h"
#include "Decorator_Speedometer.h"
#include "Decorator_Xenion.h"
#include "SmallCar.h"
#include "MiddleRangeCar.h"
#include "PremiumCar.h"
#include "SUV.h"

using  namespace std;


void EmptyTestCase()
{
	cout << "Empty testcase with NULL pointer." << endl;

	CarRental Rental;

	Rental.Add(0);
	Rental.GetAvailable("","");
	Rental.GetReserved("","");
	Rental.MoveToAvailable(0);
	Rental.Reserve(0);
	Rental.PrintAvailable(cout);
	Rental.PrintReserved(cout);

	cout << endl << endl;
}

void SingleTestCase()
{
	cout << "Testcase with single entry" << endl;

	CarRental Rental;

	ICar* VW = new SmallCar("VW","Golf");
	ICar* MyCar = new Decorator_AirConditioner(VW);

	cout << "Add ...";
	Rental.Add(MyCar);
	cout << "done" << endl;

	cout << "GetAvailable ...";
	TCarList list = Rental.GetAvailable("VW","Golf");
	cout << "done" << endl;

	cout << "Reserve ...";
	for_each(list.begin(),list.end(),[&](ICar* m)
	{
		Rental.Reserve(m);
	});	
	cout << "done" << endl;

	cout << "GetReserved ...";
	Rental.GetReserved("VW","Golf");
	cout << "done" << endl;

	cout << "PrintReserved ...";
	Rental.PrintReserved(cout);
	cout << "done" << endl;

	cout << "MoveToAvailable ...";	
	for_each(list.begin(),list.end(),[&](ICar* m)
	{
		Rental.MoveToAvailable(m);
	});	
	cout << "done" << endl;	

	cout << "PrintAvailable ...";
	Rental.PrintAvailable(cout);
	cout << "done" << endl;
}

int main()
{
	EmptyTestCase();
	SingleTestCase();

	return 0;
}