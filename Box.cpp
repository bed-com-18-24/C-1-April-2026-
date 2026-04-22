#include "Box.h"

Box::Box()
{
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newlength, const double newBreadth, const double newHeight)
{
    length = newlength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box()
{
}

double Box::GetVolume()
{
    return length * breadth * height;
}

void Box::SetLength(double len)
{
    length = len;
}
void Box::SetBreadth(double bre)
{
    breadth = bre;
}
void Box::SetHeight(double hei)
{
    height = hei;
}

//Overload + operator to add two Box objexts.
Box Box::operator+(const Box& b){
    Box box;
    box.length = this->length +b.length;
    box.height = this->height +b.height;
    box.breadth = this->breadth +b.breadth;

    return box;
}
