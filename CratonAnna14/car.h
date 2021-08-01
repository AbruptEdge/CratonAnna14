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
    void displayInfo(car);

    int numDoors;

    //constructor
    car(string manufactuer, int year, int doors) {
       vehical vehicalOne();
       numDoors = doors;
    }

};

#endif#pragma once
