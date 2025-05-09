#include <iostream>


using namespace std;

int main() {
    int choice;
    double price;
    cout << "Select a tea type:\n" << endl;
    cout << "1. Green Tea\n" << endl;
    cout << "2. Black Tea\n" << endl;
    cout << "3. Herbal Tea\n" << endl;
    cout << "4. Oolong Tea\n" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2.5;
        cout << "You have ordered Green Tea. Price: $" << price << endl; 
        break;
    case 2:
        price = 3.0;
        cout << "You have ordered Black Tea. Price: $" << price << endl;
        break; 
    case 3:
        price = 2.0;
        cout << "You have ordered Herbal Tea. Price: $" << price << endl;
        break;
    case 4:
        price = 4.0;
        cout << "You have ordered Oolong Tea. Price: $" << price << endl;
        break;
    default:
        cout << "Invalid choice. Please select a valid tea type." << endl;
        break;
    }

    return 0;
}