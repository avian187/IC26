#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nodiscard"
//
// Created by protr on 11/30/2023.
//

#ifndef IC26_BEVMOMO_BEVERAGE_H
#define IC26_BEVMOMO_BEVERAGE_H

#include <iostream>
#include <string>
#include <utility>
#include <sstream>
#include <iomanip>

using namespace std;


class Beverage {
    protected:
        string mName;
        int mCalories;
        char mSize;
        int mOrderNumber;
        static int sNextOrderNumber;

    public:
        Beverage(string name, int calories, char size)
        : mName(std::move(name)), mCalories(calories), mSize(size), mOrderNumber(sNextOrderNumber++) {}

        string getName() { return mName;}
        void setName(string name) { mName = std::move(name);}
        int getCalories() const { return mCalories;}
        void setCalories(int calories) { mCalories = calories;}
        char getSize() const { return mSize;}
        void setSize(char size) { mSize = size;}
        int getOrderNumber() const { return mOrderNumber;}

        friend ostream& operator<<(ostream& os, Beverage& bev) {
            os << bev.print();
            return os;
        }

        bool operator==(const Beverage& bev) {
            return (mName == bev.mName) && (mCalories == bev.mCalories) && (mSize == bev.mSize);
        }

        virtual string print() const;

        virtual ~Beverage() = default;


};

#endif //IC26_BEVMOMO_BEVERAGE_H

#pragma clang diagnostic pop