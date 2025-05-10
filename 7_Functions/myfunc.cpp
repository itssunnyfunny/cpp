#include <iostream>


using namespace std;


void printTeaType(string teaType)
{
    cout << "Brewing cup of " << teaType << " tea.\n";
}

// function declaration
void someFunction(int a, int b);

// function overloading default parameter
void someFunction(string a = "masala chai")
{
   cout << "The tea type is: " << a << endl;
}

int main() {
    printTeaType("green");
    printTeaType("black");
    printTeaType("oolong");

    someFunction(5, 10);
    someFunction("oolong");
    return 0;

}

// function definition
void someFunction(int a, int b)
{
    cout << "The sum of " << a << " and " << b << " is: " << a + b << endl;
}