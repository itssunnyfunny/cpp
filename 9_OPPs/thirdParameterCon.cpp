#include <iostream>
#include <string>
#include <vector>

using namespace std;
// parameterized constructor
class Coffee {
    public:
            // data members (attributes)
            string coffeeName; 
            int Servings;
            vector<string> ingredients;
           Coffee( string n, int a, vector<string> h) {
                coffeeName = n;
                Servings = a;
                ingredients = h;
                cout << "Parameterized constructor called!" << endl;
            }

            // member functions (methods)
            void dispalyCoffeeDetails() {
                cout << "Coffee Name: " << coffeeName << endl;
                cout << "Servings: " << Servings << endl;
                cout << "Ingredients: ";
                for (const auto& ingredient : ingredients) {
                    cout << ingredient << " ";
                }
                cout << endl;
            }

};

int main() {
    
     Coffee myCoffee("Espresso", 2, {"Water", "Coffee Beans"});
     myCoffee.dispalyCoffeeDetails();   
    return 0;
}