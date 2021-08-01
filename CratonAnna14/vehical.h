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
    
    //getters?
    string getManufactuer();
    int getYear();

    string manufactuer;
    int yearBuilt;

    //constructor
    vehical() {
     
        manufactuer = getManufactuer();
        yearBuilt = getYear();
    }



};

#endif#pragma once
