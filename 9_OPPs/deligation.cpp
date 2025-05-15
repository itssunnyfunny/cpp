#include <iostream>       
#include <string>
#include <vector>



using namespace std;
// delegration constructor
class Chai{
    public:
    string teaName;
    int teaServings;
    vector<string> ingredients;

    Chai(string name, int serve, vector<string> ing){
        teaName = name;
        teaServings = serve;
        ingredients = ing;
        cout << "Parameterized constructor called!" << endl;
    }

    // delegating constructor
    Chai(string name) : Chai(name, 1, {"water", "tea leaves"}) {}

        void dispalyCoffeeDetails() {
                 cout << "Chai Name: " << teaName << endl;
                cout << "Servings: " << teaServings << endl;
                cout << "Ingredients: ";
                for (const auto& ingredient : ingredients) {
                    cout << ingredient << " ";
                }
                cout << endl;
            }
};


int main() {
    Chai quickChai("Quick chai");
    quickChai.dispalyCoffeeDetails();

    return 0;
}