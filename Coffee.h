#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nodiscard"
//
// Created by protr on 11/30/2023.
//

#include "Beverage.h"

#ifndef IC26_BEVMOMO_COFFEE_H
#define IC26_BEVMOMO_COFFEE_H

using namespace std;

class Coffee : public Beverage {
private:
    int mCaffeine;
    string mRoast;

public:
    Coffee(string name, int calories, char size, int caffeine, string roast)
            : Beverage(std::move(name), calories, size), mCaffeine(caffeine), mRoast(std::move(roast)) {}

    bool operator==(const Coffee& bev) {
        return Beverage::operator==(bev) && (mCaffeine == bev.mCaffeine) && (mRoast == bev.mRoast);
    }

    string print() const;
};

#endif //IC26_BEVMOMO_COFFEE_H

#pragma clang diagnostic pop