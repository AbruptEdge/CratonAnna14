// Anna Crafton
//car.ccp*
#pragma once
#include <iostream>
#include "vehical.h"
#include "car.h"
using namespace std;

void car::displayCarInfo(car car) {
    cout << "\nCar Information:";
    vehical:displayInfo(car);
    cout << "Doors: " << car.numDoors;
    return;
};

int car::getDoors() {
    int doors;
    cout << "Enter number of doors: ";
    cin >> doors;
    return doors;
}