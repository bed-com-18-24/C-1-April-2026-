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

cout <<endl;
    swap(ValueA, ValueB);// swaping values using built in algorithms
    cout << "ValueA after swap: "<< ValueA<<endl; 
    cout << "ValueB after swap: "<< ValueB<<endl; 
    return 0;
}