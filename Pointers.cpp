#include <iostream> 
using namespace std; 
 
int main() 
{ 
   int firstValue;
   int secondValue;
   
   int pPointer = nullptr;
   
   
   //Assigning pointer with the address of firstValue.
   pPointer = &firstValue;
   *pPointer = 10; //indirection
   
   //Assigning pointer with the address of firstValue.
   pPointer = &secondValue;
   *pPointer = 20; //indirection
   
   cout << "firstValue is "<<firstValue<<'\n';
   cout << "secondValue is "<<secondValue<<'\n';
   
   return 0; 
}