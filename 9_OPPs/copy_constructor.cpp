#include <iostream>
#include <string>
#include <vector>

using namespace std;
// parameterized constructor
class Coffee {
    public:
            // data members (attributes)
            string* coffeeName; 
            int Servings;
            vector<string> ingredients;
           Coffee( string n, int a, vector<string> h) {
                coffeeName = new string(n);
                Servings = a;
                ingredients = h;
                cout << "Parameterized constructor called!" << endl;
            }

            // member functions (methods)
            void dispalyCoffeeDetails() {
                cout << "Coffee Name: " << *coffeeName << endl;
                cout << "Servings: " << Servings << endl;
                cout << "Ingredients: ";
                for (const auto& ingredient : ingredients) {
                    cout << ingredient << " ";
                }
                cout << endl;
            }
            Coffee(const Coffee& other) {
                coffeeName = new string(*other.coffeeName); // Deep copy
                Servings = other.Servings;
                ingredients = other.ingredients;
                cout << "Copy constructor called!" << endl;
            }

            ~Coffee() {
                cout << "Destructor called for " << coffeeName << endl;
            }

};

int main() {
    
     Coffee myCoffee("Espresso", 2, {"Water", "Coffee Beans"});
      
     
     Coffee mycoffee2 = myCoffee; // Copy constructor

     
     cout << "myCoffee details:_____________" << endl;
     myCoffee.dispalyCoffeeDetails();
     
     cout << "mycoffee2 details:____________" << endl;
     mycoffee2.dispalyCoffeeDetails();
    return 0;
}