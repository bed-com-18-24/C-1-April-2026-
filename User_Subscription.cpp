#include <iostream>
#include <cstdlib> //for rand from the c++ library and srand
#include <ctime>   // for time functions
using namespace std;

int main()
{
    // Geting the System time
    unsigned seed = time(0);

    // seed te random number generator
    srand(seed);

    int daysUntilExpiration = (rand() % (11 - 0 + 1) + 0); //(rand() % (maxValue − minValue + 1)) + minValue;
    cout << '\n';

    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
    {
        cout << "Your subscription will expire soon. Renew now! \n";
    }

    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%! " << endl;
    }

    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day! " << "\nRenew now and save 20%! " << endl;
    }

    else if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired. \n";
    }
    else
    {
        cout << "You have an active subscription\n";
    }

    return 0;
}
