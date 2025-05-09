 #include <iostream>

using namespace std;

int main() {
    // Implicit casting
    int a = 10;
    double b = a; // int to double
    cout << "Implicit casting: " << b << endl; // Output: 10.0

    // Explicit casting
    double c = 9.99;
    int d = (int)c; // double to int
    cout << "Explicit casting: " << d << endl; // Output: 9

    // C-style casting
    char e = 'A';
    int f = (int)e; // char to int
    cout << "C-style casting: " << f << endl; // Output: 65

    return 0;
}