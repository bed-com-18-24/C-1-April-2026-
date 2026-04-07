#include <iostream>
#include <random>

using namespace std;

int main()
{
    string Codes[] {"B123","C234","A345","C15","B177","G3003","C235","B179"};

    for(int code = 0; code < 8; code++){
        //Checking first letter
        if(Codes[code][0] == 'B') //Checks the first letter: 0 of each word in this cae B
        {
            cout <<Codes[code]<<'\n';
        }
    }
    return 0;
}