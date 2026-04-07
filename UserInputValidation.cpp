#include <iostream>
#include <random>

using namespace std;

int main()
{
    int UserInput;
    cout << "\nEnter an integer value between 5 and 10: ";
    while (!(cin >> UserInput)) // The loop repeats as long as the user does not enter a valid integer.
    {
        cout << "Sorry, You entered an invalid number, please try again \n";
        cin.clear(); // resert cin to read input again
        cin.ignore(1000, '\n');
    }
    

    return 0;
}