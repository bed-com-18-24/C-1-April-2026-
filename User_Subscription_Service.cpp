#include <iostream>
#include <random>    /*including random number library 
                (Modern recomended random number generation)*/
using namespace std; // allow using Standard library names without std::

int main()
{
    random_device rd;                       // creating random seed generator(Creating random numbers at each runtime)
                                            // Geting randomness from the System
    mt19937 gen(rd());                      // creating random number generator engine: Mersenne Twister(High quality random algorithm)
                                            // rd() create results that are not the same to the seed
    uniform_int_distribution<> dist(0, 11); // defines range of numbers. generate integers from 0 to 11 in uniform range: 0,1,2.....11

    int daysUntilExpiration = dist(gen); /* dist(gen) means use the geneartor (gen) apply the distribution (dist) and store the result indaysUntilExpiration */

    cout << " " << '\n';
    if (daysUntilExpiration == 10)
    {
        cout << "Your subscription will expire soon. Renew now! \n";
    }

    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
    {
        cout << "Your Subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!" << endl;
    }

    else if (daysUntilExpiration == 1)
    {
        cout << "Your subscription expires within a day! \nRenew now and save 20%!" << endl;
    }

    else if (daysUntilExpiration == 0)
    {
        cout << "Your subscription has expired. \n";
    }
    else
    {
        cout << "You have an active subscription.";
    }

    return 0;
}
