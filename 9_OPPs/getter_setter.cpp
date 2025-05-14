#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Coffee {
    private: 
      string coffeeName;
      int Servings;
      vector<string> ingredients;

    public:
      Coffee(){
        coffeeName = "unknown coffee";
        Servings = 1;
        ingredients = {"water", "coffee beans"};
      }

      Coffee(string name, int serve, vector<string> ingredient){
        coffeeName = name;
        Servings = serve;
        ingredients = ingredient;
      }

      // getter for coffee name
      string getCoffeeName(){
        return coffeeName;
      }
      // setter - for coffee name
      void setCoffeeName(string name){
           coffeeName = name;
      }


      // getter - for servings 
     int getServings(){
        return Servings;
     }

     // setter -- for servings
     void setServings(int serve){
         Servings = serve;
     }

    // getter ----for ingredients
    vector<string> getIngredients(){
        return ingredients;
    } 


    // setter ====== for ingredients
    void setIngredients( vector<string> ingredient){
        ingredients = ingredient;
    }

      
};

int main() {
    Coffee newCoffee1("latte", 4, {"water", "coffee beans"});
    newCoffee1.setServings(19) ;
    
}