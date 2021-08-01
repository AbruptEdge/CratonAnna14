#pragma once
//Anna Crafton
//car.h*
#ifndef CAR_H;
//#define VEHICAL_H;
#include <iostream>

#pragma once

using namespace std;


//Child class
class car : public vehical {
public:
    //functions
    void displayCarInfo(car);
    int getDoors();

    int numDoors;

    //constructor
    car() {
       numDoors = getDoors();
    }

};

#endif#pragma once
