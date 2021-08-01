//Anna Crafton
//CIS 1202 101
//July 30 2021

//CraftonAnna14

#pragma once
#include <iostream>
#include "vehical.h"
#include "car.h"

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
	cout << "\nCar: \nEnter a manufactuer: ";
	cin >> manufactuer;
	cout << "Enter a year: ";
	cin >> year;
	cout << "Enter number of doors: ";
	cin >> doors;

	car carOne(manufactuer,year, doors);
	carOne.displayInfo(carOne);

	cout << endl;
	return 0;
}
