#include <iostream>
using namespace std;

int main()
{
    int numberOfRows, numberOfColumns;
    bool condition = true;
    // Enforcing valid number of rows.
    cout << "\nCreating an array\n";

    while (condition)
    {
        cout << "Enter number of Columns for the array(1-3): ";
        cin >> numberOfColumns;

        // if the user enters invalid input
        if (numberOfColumns >= 1 && numberOfColumns <= 3)
        {
            cout << "\nYou entered " << numberOfColumns << " as number of Columns for the array\n";
            break;
        }
        else
        {
            cout << "Number of Columns must be between 1 and 3\nTry again...\n";
        }
    }

    while (condition)
    {
        cout << "Enter number of rows for the array(1-3): ";
        cin >> numberOfRows;

        // if the user enters invalid input
        if (numberOfRows >= 1 && numberOfRows <= 3)
        {
            cout << "\nYou entered " << numberOfRows << " as number of rows for the array\n";
            break;
        }
        else
        {
            cout << "Number of rows must be between 1 and 3\nTry again...\n";
        }
    }

    // Dynamic allocation of the a 2dimension array
    double **doubleValuesArray = new double *[numberOfRows]; // Allocating an array of numberOfRows pointers to double

    for (int i = 0; i < numberOfRows; i++)
    {
        doubleValuesArray[i] = new double[numberOfColumns]; // for each row allocate an array of numberOfColumns  doubles
    }

    // giving values to the elements using nested loops
    cout << "\nNow. Enter values for the array: \n";
    for (int i = 0; i < numberOfRows; i++)
    {

        for (int j = 0; j < numberOfColumns; j++)
        {
            cout << "Element[" << i << "][" << j << "]: ";
            cin >> doubleValuesArray[i][j]; // reading value into the allocated 2D array;
        }
    }
    cout<<"\n";

    // Dispalaying value from the allocated 2D array;
    cout<<"Values of the array are: \n";
    
    for (int i = 0; i < numberOfRows; i++)
    
    {

        for (int j = 0; j < numberOfColumns; j++)
        {
            cout << "Element[" << i << "][" << j << "]: "<<doubleValuesArray[i][j]<<" \n"; 
        }
    }

    // free up the allocated memry to avoid memory leaks
    for (int i = 0; i < numberOfRows; i++)
    {
        delete[] doubleValuesArray[i];
    }

    delete[] doubleValuesArray;
    return 0;
}