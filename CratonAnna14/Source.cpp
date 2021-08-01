//Anna Crafton
//CIS 1202 101
//July 30 2021

//CraftonAnna14

#pragma once
#include <iostream>
#include "vehical.h"
#include "car.h"
#include "truck.h"

using namespace std;

int main() {

	int year;
	string manufactuer;
	int doors;

	//vehical test
	vehical vehicalOne;
	cout << "\nVehical Information: ";
	vehicalOne.displayInfo(vehicalOne);

	//car test
	car carOne;
	carOne.displayCarInfo(carOne);
	cout << endl;

	//truck test
	truck truckOne;
	truckOne.displayTruckInfo(truckOne);

	cout << endl;
	return 0;
}
