#include <iostream>
using namespace std;

int main(){
    
    // null pointer
    int* pPointer = nullptr;

    int numberArray[3] ={10,20,30};

    //Assign address of numberArray[0] to pointer
    pPointer = numberArray;

    // Otput the numberArray[0] address
    cout << "Address at pPointer: "<<pPointer<<endl;
    cout << "Address of numberArray[0]: "<<numberArray<<endl;

    //Output the value of the numberArray[0]using the pointer and indirection
    cout << "Value at pPointer: "<< *pPointer<<endl;

    //This outputs the value of the second element
    cout << "Value at ++pPointer: "<<*(++pPointer)<<endl;

    //Assigning the address of numberArray[0] to pointer
    pPointer = numberArray;

    //Display the content(value) of numberArray[0]
    cout << "Value at pPointer++: "<<*(pPointer++)<<endl;

    return 0;
    
}