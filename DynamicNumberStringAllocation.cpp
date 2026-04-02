// Dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
    int* number = new int; //number points to an integer stored on the heap
    string* wordtext = new string; 

    // Ask user for input
    cout <<"\nEnter an integer value: ";
    cin >> *number; //Store entered integer in the memory pointed to.

    cout << "Enter a String input: ";
    cin >> *wordtext;

    //displaying values.
    cout<< "\nYou entered: "<< *number <<" and " << *wordtext<<endl; //accessing actual vales stored in the allocated memory

    delete number,wordtext; //realising memory given to number and wordtext

    return 0;
}