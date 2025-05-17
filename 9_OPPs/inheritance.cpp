#include <iostream>
#include <string>
#include <vector>


using namespace std;


// base class 
class Tea {
    protected: 
        string teaName;
        int sevrings;

    public: 
       Tea(string name, int servings) : teaName(name), sevrings(servings) {}

       virtual void brew() const {
            cout << "Brewing tea"<< teaName << endl;
        }

        virtual ~Tea() {
            cout << "Destructor called" << endl;
        }

        void dispalyTeaDetails() {
            cout << "Tea Name: " << teaName << endl;
            cout << "Servings: " << sevrings << endl;
        }
};


class GreenTea : public Tea {
    public: 
        GreenTea(string name, int servings) : Tea(name, servings) {
            cout << "Green tea contructor is called" << endl;
        }
        void brew() const override {
            cout << "Brewing green tea"<< teaName << endl;
        }

        ~GreenTea() {
            cout << "Destructor called" << endl;
        }
};

class MasalaTea : public Tea {
    public: 
        MasalaTea(string name, int servings) : Tea(name, servings) {
            cout << "Masala tea contructor is called" << endl;
        }
        void brew() const override  final{ // final keyword is used to make the function final and override keyword is used to make the function override
            cout << "Brewing masala tea"<< teaName << endl;
        }

        ~MasalaTea() {
            cout << "Destructor called" << endl;
        }
};


int main() {

    GreenTea greenTea("Green Tea", 2);
    greenTea.brew();
    greenTea.dispalyTeaDetails();


    MasalaTea masalaTea("Masala Tea", 3);
    masalaTea.brew();
    masalaTea.dispalyTeaDetails();
    return 0;
}