#include <iostream>



using namespace std;

// call by reference is a method of passing arguments to a function
// in which the address of the argument is passed to the function
void numberOfCoffee(int &cups)
{
      cups = cups + 10;
    cout << "Brewing cup of coffee " << cups << ".\n";
}


int main() {
    int cups = 5;
    cout << "Brewing cup of coffee " << cups << ".\n";
    numberOfCoffee(cups);
    cout << "Brewing cup of coffee " << cups << ".\n";
    return 0;
}