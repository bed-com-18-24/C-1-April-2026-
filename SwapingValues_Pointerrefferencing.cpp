//swaping values of any data type using built in algorithms
#include <iostream>
using namespace std;
#include <algorithm>


int main()
{
    int ValueA = 25;
    int ValueB = 100;
    
    cout << "ValueA before swap: "<< ValueA<<endl; 
    cout << "ValueB before swap: "<< ValueB<<endl; 
int* valuePointer1 = nullptr;
int* valuePointer2 = nullptr;

valuePointer1 = &ValueA;
valuePointer2 = &ValueB;
cout <<endl;

    swap(*valuePointer1, *valuePointer2);// swaping values using built in algorithms
    //After swapping
    cout << "ValueA after swap: "<< *valuePointer1<<endl; 
    cout << "ValueB after swap: "<< *valuePointer2<<endl; 
    return 0;
}