#include <iostream>
using namespace std;

int main() {
    int value1 = 20;
    int *value1Pointer = &value1;

    cout << "Value of value1: " << value1 << endl;
    cout << "Address of value1: " << &value1 << endl;
    cout << "Value stored in value1Pointer: " << value1Pointer << endl;
    cout << "Value pointed to by value1Pointer: " << *value1Pointer << endl;

    return 0;
}
