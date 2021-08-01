//Anna Crafton
//Vehical.ccp*
#pragma once
#include <iostream>
#include "vehical.h"
#include "truck.h"
using namespace std;


void truck::displayTruckInfo(truck car) {

    cout << "\nTruck Information: ";
    displayInfo(car);
    cout << "Towing Capacity: " << car.towingCapacity;
};

int truck::getTow() {
    int tow;
    cout << "Enter Towing Capacity: ";
    cin >> tow;
    return tow;
}