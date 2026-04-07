#include <iostream>
#include <random>

using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 11);
    int daysUntilExpiration = dist(gen);
    cout << " " << '\n';

    switch (daysUntilExpiration)
    {
    case 10:
        cout << "Your subscription will expire soon. Renew now! \n";
        break;
    case 1:
        cout << "Your subscription expires within a day! \nRenew now and save 20%!" << endl;
        break;
    default:
        if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
        {
            cout << "Your Subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!" << endl;
        }

        else if (daysUntilExpiration == 0)
        {
            cout << "Your subscription has expired. \n";
        }
    }
    return 0;
}