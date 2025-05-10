#include <iostream>
#include <string>

using namespace std;

int main() {
    string response;

    do
    {
       cout << "DO you want more tea? (yes/no)\n";
       getline(cin, response); 
    } while (response != "no");
    
}