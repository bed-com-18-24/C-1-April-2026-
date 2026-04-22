#pragma once
#include <iostream>

using namespace std;

class Box
{
public:
    Box();
    Box(const double newlength, const double newBreadth, const double newHeight);

    ~Box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Overload + operator to add two Box ojects
    Box operator+(const Box &b);

private:
    double length, breadth, height; // Dimensions of the Box
};