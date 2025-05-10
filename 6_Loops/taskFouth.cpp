#include <iostream>
#include <string>


using namespace std;
int main() {
    string response;
     while (true)
     {
       cout << "DO you want more tea? (type 'stop' to exit)?: ";
         getline(cin, response);
            if (response == "stop")
            {
                break;
            }
            cout << "Here is your another cup of tea.\n";
     }
     cout << "No more tea will be served to you \n";
     cout << "Thank you for your time \n";
     return 0;
     
}