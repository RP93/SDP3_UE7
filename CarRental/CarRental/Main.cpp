#include <iostream>

using  namespace std;

#include "ICar.h"
#include "Decorator.h"
#include "Decorator_AirConditioner.h"
#include "SmallCar.h"

int main()
{
	ConcreteCar* car = new SmallCar("Audi","A4");
	ICar* airCondi = new Decorator_AirConditioner(car,3000);
	airCondi->Print(cout);
	cout << "Total Price: " << airCondi->GetPrice() << endl;
	
	return 0;
}