//Anna Crafton
//Vehical.ccp*
#pragma once
#include <iostream>
#include "vehical.h"
using namespace std;


void vehical :: displayInfo(vehical car) {
    cout << "\nManufactuer: " << car.manufactuer << endl;
    cout << "Year Built:  " << car.yearBuilt << endl;
};

string vehical::getManufactuer() {
    string manufactuer;
    cout << "\nEnter a manufactuer: ";
    cin >> manufactuer;
    return manufactuer;
}

int vehical::getYear() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    return year;
}