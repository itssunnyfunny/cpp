#include <iostream>



using namespace std;
// && (AND), || (OR), ! (NOT)
// Logical operators are used to combine or invert boolean expressions

int main() {
    bool isStudent;
    int cups;
    cout << "Are you a student? (1 for Yes, 0 for No): ";
    cin >> isStudent;

    cout << "How many cups of tea have you purchased? ";
     cin >> cups;

    if (isStudent || cups > 15){
        cout << "You are eligible for a discount!" << endl;
    } else {
        cout << "No discount for you!" << endl;
    }
    return 0;
}