//
// Created by protr on 11/30/2023.
//

#include "Coffee.h"

string Coffee::print() const {
    stringstream ss;
    ss << left
        << Beverage::print()
       << setw(14) << mCaffeine
       << "| "
       << setw(9) << mRoast
       << "| ";
    return ss.str();
}
