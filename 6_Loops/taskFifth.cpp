#include <iostream>
#include <string>

using namespace std;


int main() {
    string teaType[5] = {"green", "black", "oolong", "white", "herbal"};

    for(int i = 0; i<5; i++)

    {
        if(teaType[i]== "oolong")
        {
            cout << "Oolong tea is not available.\n";
            continue;
        }
        cout << "Brewing cup " << i + 1 << " of " << teaType[i] << " tea.\n";
    }

    return 0;
}