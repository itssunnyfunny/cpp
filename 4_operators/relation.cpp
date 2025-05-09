#include <iostream>


using namespace std;

int main() {
    int cups;
    cout << "Enter the number of cups you have: ";
    cin >> cups;

    if (cups >= 20) {
        cout << "you get a Golden badge!" << endl;
    } else if (cups <20 && cups >= 10) {
        cout << "you get a Silver badge!" << endl;
    } else {
        cout << "No badge for you!" << endl;
    }
    return 0;
    
}