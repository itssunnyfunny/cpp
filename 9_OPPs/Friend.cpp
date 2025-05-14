           
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Chai {
private:
    string name;
    int servings;

public:
   Chai(string name, int serve) : name(name), servings(serve) {};

    friend bool compareServings(const Chai &chai1 , const Chai &chai2);
    void serve() const {
        cout << "Serving " << servings << " cups of " << name << " tea." << endl;
    }

    
};

bool compareServings(const Chai &chai1, const Chai &chai2) {
    return chai1.servings > chai2.servings ;
}

int main () {
    Chai chai1("Masala", 2);
    Chai chai2("Ginger", 3);

    chai1.serve();
    chai2.serve();

    if(compareServings(chai1, chai2)){
        cout << "Masala Chai is having MORE servings" << endl;
    } else {
          cout << "Masala Chai is having LESS servings" << endl;
    }

    return 0;
}