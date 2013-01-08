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
	Rental.Reserve(MyCar);	
	cout << "done" << endl;

	cout << "GetReserved ...";
	list = Rental.GetReserved("VW","Golf");
	cout << "done" << endl;

	cout << "PrintReserved ...";
	Rental.PrintReserved(cout);
	cout << "done" << endl;

	cout << "MoveToAvailable ...";	
	Rental.MoveToAvailable(MyCar);
	cout << "done" << endl;	

	cout << "PrintAvailable ...";
	Rental.PrintAvailable(cout);
	cout << "done" << endl;

	cout << endl << endl;
}

void MultiTestCase()
{
	cout << "Testcase with several entries" << endl;

	CarRental Rental;

	ICar* VW = new SmallCar("VW","Golf");
	ICar* MyCar = new Decorator_AirConditioner(VW);

	ICar* Audi = new PremiumCar("Audi","R8");
	ICar* Xenon = new Decorator_Xenion(Audi);
	ICar* MySecondCar = new Decorator_Navi(Xenon);

	ICar* MySUV = new SUV("Toyota","RAV4");
	
	ICar* BMW = new MiddleRangeCar("BMW","3");
	ICar* MyMiddleRangeCar = new Decorator_Speedometer(BMW);

	cout << "Add ...";
	Rental.Add(MyCar);
	Rental.Add(MySecondCar);
	Rental.Add(MySUV);
	Rental.Add(MyMiddleRangeCar);
	cout << "done" << endl;

	cout << "GetAvailable ...";
	TCarList list = Rental.GetAvailable("VW","Golf");
	cout << "done" << endl;

	cout << "Reserve ...";
	Rental.Reserve(MySecondCar);
	Rental.Reserve(MySUV);
	cout << "done" << endl;

	cout << "GetReserved ...";
	list = Rental.GetReserved("VW","Golf");
	cout << "done" << endl;

	cout << "PrintReserved ...";
	Rental.PrintReserved(cout);
	cout << "done" << endl;

	cout << "MoveToAvailable ...";	
	Rental.MoveToAvailable(MySUV);
	cout << "done" << endl;	

	cout << "PrintAvailable ...";
	Rental.PrintAvailable(cout);
	cout << "done" << endl;
	
	cout << endl << endl;
}

int main()
{
	EmptyTestCase();
	SingleTestCase();
	MultiTestCase();

	return 0;
}