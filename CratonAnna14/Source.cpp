//Anna Crafton
//CIS 1202 101
//July 30 2021

//CraftonAnna14

#pragma once
#include <iostream>
#include "vehical.h"

using namespace std;

int main() {

	int year;
	string manufactuer;

	cout << "\nVehical: \nEnter a manufactuer: ";
	cin >> manufactuer;
	cout << "Enter a year: ";
	cin >> year;

	vehical vehicalOne(manufactuer, year);
	cout << "\nVehical Information: ";
	vehicalOne.displayInfo(vehicalOne);

	cout << endl;
	return 0;
}
