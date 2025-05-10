#include <iostream>

using namespace std;


int main() {
    int teaCups;
    cout << "Enter the number of cups of tea to serve:\n";;
    cin >> teaCups;

    // while loop
    while (teaCups > 0) {
        cout << "Serving a cup of tea " << teaCups << "remaining.\n";
        teaCups--;
    }

    cout << "All cups of tea served.";
}