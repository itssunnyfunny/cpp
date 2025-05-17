#include <iostream>
#include <string>

using namespace std;

// abstract class is a class that cannot be instantiated
// abstract class is a class that contains pure virtual functions
// pure virtual functions are functions that are declared in a class but not defined in the class

// abstract class
class Tea {
    public: 
        virtual void prepareTea() = 0; // pure virtual function
        virtual void serveTea() = 0;
        virtual void brewTea() = 0;

        void makeTea() {
            prepareTea();
            brewTea();
            serveTea();
        }
};

// derived class
class GreenTea : public Tea {
    public:
        void prepareTea() override {
            cout << "Preparing green tea" << endl;
        }
        void serveTea() override {
            cout << "Serving green tea" << endl;
        }
        void brewTea() override {
            cout << "Brewing green tea" << endl;
        }
};

int main() {
    GreenTea greenTea;
    greenTea.makeTea();
    return 0;
}


