#include <iostream>
using namespace std;

double areaOfSquare(double side)
{
    double result = side * side;
    return result;
}

double areaOfRectangle(double length, double width)
{
    double result = length * width;
    return result;
}
double areaOfTriangle(double base, double height)
{
    double result = 0.5 * base * height;
    return result;
}
// Main method
int main()
{
    int choice;
    do
    {
        cout << "\nPlease select the area of the shape to calculate\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Enter selection: ";
        cin >>choice;
        // Input validation
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }
    

    switch (choice)
    {
    case 1:
        double side;
        cout << "Enter side: ";
        cin >> side;
        cout << "Area of square = " << areaOfSquare(side) << endl;
        break;
    case 2:
        double width, length;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Area of Rectangle = " << areaOfRectangle(length, width) << endl;
        break;
    case 3:
        double base, height;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;
        cout << "Area of Triangle = " << areaOfTriangle(base, height) << endl;
        break;

    case 4:
        cout << "Exiting program...\n";
        break;
    default:
        cout << "Your input was: " << choice << " which is  an invalid input\n";
        cout << "Please enter a valid input!!!\n";
    }
} while (choice != 4);
    return 0;
}
