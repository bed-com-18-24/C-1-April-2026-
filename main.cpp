//Main Function of the program
#include <iostream>
#include "Box.h"
using namespace std;

int main(){
    Box Box1,Box2,Box3;// declaring three boxes of type Box
    double volume = 0.0; //Storing volume of  abox here;

    //Box 1 Specifications
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

     //Box 2 Specifications
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //volume of Box 1

    volume = Box1.GetVolume();
    cout<<"Volume of Box1: "<<volume<<endl;

    volume = Box2.GetVolume();
    cout<<"Volume of Box2: "<<volume<<endl;

    //Add two objects as follows
    Box3 = Box1 + Box2;
    //Volume of Box3
    volume = Box3.GetVolume();
    cout<<"Volume of Box3: "<<volume<<endl;

    return 0;
}