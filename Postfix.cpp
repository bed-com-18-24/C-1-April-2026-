#include <iostream>
using namespace std;

int main(){
    int x = 3;

    int y = x++;
    cout << "x: "<<x<<endl;
    cout << "y: "<<y<<endl;//Output is 3 since inrementing is done after the expression has ben evaluated.

    return 0;
}