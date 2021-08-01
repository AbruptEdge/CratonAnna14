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
