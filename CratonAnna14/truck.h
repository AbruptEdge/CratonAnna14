#pragma once
//Anna Crafton
//truck.h*
#ifndef TRUCK_H;

#include <iostream>

#pragma once

using namespace std;


//Child class
class truck : public vehical {
public:

    //functions
    void displayInfo(truck);

    int towingCapacity;

    //constructor
    truck(string truckManufactuer, int year, int tow) {
        manufactuer = truckManufactuer;
        yearBuilt = year;
        towingCapacity = tow;
    }

};

#endif#pragma once
