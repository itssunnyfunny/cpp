#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
    public:
            // data members (attributes)
            string name; 
            int age;
            vector<string> hobbies;

            // default constructor
            Person() {
                name = "Unknown";
                age = 0;
                hobbies = {};
            }

            // parameterized constructor
            Person(string n, int a, vector<string> h) {
                name = n;
                age = a;
                hobbies = h;
            }

            // member functions (methods)
            void displayPersonDetails() {
                cout << "Name: " << name << endl;
                cout << "Age: " << age << endl;
                cout << "Hobbies: ";
                for (const auto& hobby : hobbies) {
                    cout << hobby << " ";
                }
                cout << endl;
            }
};


int main() {
            // Create an object of the Person class using the default constructor
            Person person1;
            person1.displayPersonDetails();

            // Create another object of the Person class using the parameterized constructor
            vector<string> hobbies = {"Reading", "Traveling", "Cooking"};
            Person person2("Alice", 25, hobbies);
            person2.displayPersonDetails();

    return 0;
}