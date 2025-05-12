#include <iostream>


using namespace std;

int main() {
   char characters[5] = {'a', 'b', 'c', 'd', 'e'};

   for (int i = 0; i < 5; i++)
   {
         cout << characters[i] << "  is printing !" << endl;
   }
    cout << "The size of the array is: " << sizeof(characters) / sizeof(characters[0]) << endl;

    return 0;
}