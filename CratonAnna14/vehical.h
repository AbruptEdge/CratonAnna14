#pragma once
//Anna Crafton
//Vehical.h*
#ifndef VEHICAL_H;
//#define VEHICAL_H;
#include <iostream>

#pragma once

using namespace std;


//Base class
class vehical {
public:
    //functions
    void displayInfo(vehical);

    string manufactuer;
    int yearBuilt;

    //constructor
    vehical(string a, int b) {
        manufactuer = a;
        yearBuilt = b;
    }

};

#endif#pragma once
