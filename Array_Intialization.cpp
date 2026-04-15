#include <iostream>
using namespace std;

int main()
{
    string Codes[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int codesLength = sizeof(Codes) / sizeof(Codes[0]);
    cout << "You have created: " << codesLength << " codes\n";
    cout << "\nHere are the codes starting with B: ";
    for (int i = 0; i <= codesLength; i++)
    {
        if (Codes[i][0] == 'B')
        {
            cout << Codes[i] << " ";
        }
    }
    cout << endl
         << "\n";
    return 0;
}
