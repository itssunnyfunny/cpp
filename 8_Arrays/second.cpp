#include <iostream>


using namespace std;

int totalToffees(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int toffees[5] = {1, 2, 3, 4, 5};
    int size = sizeof(toffees) / sizeof(toffees[0]);
    cout << "Total toffees: " << totalToffees(toffees, size) << endl;
    return 0;
}