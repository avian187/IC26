//
// Created by protr on 11/30/2023.
//

#include "Beverage.h"

int Beverage::sNextOrderNumber = 1;

string Beverage::print() const {
    stringstream ss;
    ss << left << "| " << setw(8) << mOrderNumber
       << "| " << setw(15) << mName
       << "| " << setw(8) << mCalories
       << "| " << setw(4) << mSize
       << "| ";
    return ss.str();
}