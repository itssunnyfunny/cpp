#include <iostream>
#include <string>

using namespace std;


int main() {
    string teaType[5] = {"green", "black", "oolong", "white", "herbal"};

    for(int i = 0; i<5; i++)
    {
        cout << "Brewing cup " << i + 1 << " of " << teaType[i] << " tea.\n";
      for (int j = 0; j < 3; j++)
        {
            cout << "Brewing cup " << j + 1 << " of " << teaType[i] << " tea.\n";
        }
        
    }

    return 0;
}