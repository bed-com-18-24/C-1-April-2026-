#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "\nEnter an integer value between 5 and 10: ";

    while (true)
    {
        cin >> value;
        if (cin.fail())
        {
            cout << "Sorry, you entered an invalid number. Please try again\n";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (value < 5 || value > 10)
        {
            cout << "You entered " << value << ". Please enter a number between 5 and 10. \n";
        }

        else
        {
            break;
        }
    }
    cout << "Your input value (" << value << ") has been accepted.\n";

    return 0;
}