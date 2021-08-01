// Anna Crafton
//car.ccp*
#pragma once
#include <iostream>
#include "vehical.h"
#include "car.h"
using namespace std;

void car::displayInfo(car car) {

    cout << "\nCar Information: ";
    cout << "\nManufactuer: " << car.manufactuer << endl;
    cout << "Year Built:  " << car.yearBuilt << endl;
};