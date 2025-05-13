#include <iostream>

using namespace std;

int* prepareChaiOrder(int cups) {
    int* order = new int[cups]; // Dynamically allocate memory for the order
    for (int i = 0; i < cups; i++) {
        order[i] = i + 1; // Assign cup numbers to the order
    }
    return order; // Return the pointer to the order
}

int main() {
     int cups = 5; 
     int* chaiOrder = prepareChaiOrder(cups); // Call the function to prepare the order
     for(int i = 0; i < cups; i++) {
        cout << "Cup number: " << chaiOrder[i] << endl; // Print the cup numbers
}

  delete[] chaiOrder; // Free the dynamically allocated memory
    return 0;
}

  // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr; // Pointer to the first element of the array

    // cout << "Array elements using pointer arithmetic:" << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic
    // }
    // cout << endl;
    // cout << "Array elements using pointer notation:" << endl;