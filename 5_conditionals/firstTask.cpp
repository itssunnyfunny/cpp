#include <iostream>
#include <string>

using namespace std;


int main() {
  string teaOrder;
    cout << "Enter your tea order: ";
    cin >> teaOrder;

    if(teaOrder == "Green Tea"){
        cout << "You have ordered Green tea!" << endl;
    }
    return 0;
}


