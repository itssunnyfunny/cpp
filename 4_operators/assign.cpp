#include <iostream>


using namespace std;
int main() {
    int a = 5;
    int b = 10;

    // Assignment operator
    a = b; // a is now 10

    // Compound assignment operators
    a += b; // a = a + b, now a is 20
    a -= b; // a = a - b, now a is 10
    a *= b; // a = a * b, now a is 100
    a /= b; // a = a / b, now a is 10
    a %= b; // a = a % b, now a is 0
    // cout << "Final value of a: " << a << endl; // Output: Final value of a: 0

    int teaBags;

    cout << "Enter the number of tea bags: ";
    cin >> teaBags;

    if(teaBags < 10){
        teaBags += 5; // Add 5 tea bags
    }

    cout << "Total tea bags: " << teaBags << endl; // Output: Total tea bags: 15

    return 0;
}