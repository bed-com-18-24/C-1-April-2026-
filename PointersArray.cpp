#include <iostream>
using namespace std;

int main(){
    int numberArray[5];

    int * pPointer = nullptr;
    pPointer = numberArray;

    *pPointer = 10;

    pPointer++;
    *pPointer =20;

    pPointer = &numberArray[2];
    *pPointer = 30;

    pPointer = numberArray + 3;
    *pPointer = 40;

   pPointer = &numberArray[4];
   *pPointer = 50;
    cout << "Values of nuumberArray are: ";
    for(int N = 0; N < 5; N++){
        cout<< numberArray[N]<<", ";
    }
}