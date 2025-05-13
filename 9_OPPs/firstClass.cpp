#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Coffee {
    public:
            // data members (attributes)
            string coffeeName; 
            int Servings;
            vector<string> ingredients;


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
            // Create an object of the Coffee class
            Coffee myCoffee;
            myCoffee.coffeeName = "Espresso";
            myCoffee.Servings = 2;
            myCoffee.ingredients = {"Water", "Coffee Beans"};

            // Call the method to display coffee details
            myCoffee.dispalyCoffeeDetails();

            // Create another object of the Coffee class
            Coffee myCoffee2;
            myCoffee2.coffeeName = "Latte";
            myCoffee2.Servings = 1;
            myCoffee2.ingredients = {"Water", "Coffee Beans", "Milk"};
            // Call the method to display coffee details
            myCoffee2.dispalyCoffeeDetails();
            

    return 0;
}