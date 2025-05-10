#include <iostream>
#include <string>


using namespace std;

int main() {
    // lambda function to brew tea
    auto brewTea = [](string teaType) {
        cout << "Brewing cup of " << teaType << " tea.\n";
    };

    brewTea("green");

    return 0;
}