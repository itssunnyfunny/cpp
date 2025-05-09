 #include <iostream>


 using namespace std;


    int main() {
        // Declare a constant variable
        const int x = 10;
        // x = 20; // This will cause a compilation error because x is a constant
    
        // Declare a variable
        int y = 20;
        y = 30; // This is allowed
    
        cout << "Constant x: " << x << endl;
        cout << "Variable y: " << y << endl;
    
        return 0;
    }