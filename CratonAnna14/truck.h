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
    void displayTruckInfo(truck);
    int getTow();

    int towingCapacity;

    //constructor
    truck() {
        towingCapacity = getTow();
    }

};

#endif#pragma once
