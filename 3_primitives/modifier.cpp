#include <iostream>


using namespace std;


int main(){
    int numberOfPack = -100;
    //using unsigned int
    unsigned numberOfPack2 = 100; // This will be interpreted as a large positive number due to underflow
    // using long
     long numberOfPack3 = 10000000000; // This will be interpreted as a large positive number due to underflow
    cout << numberOfPack << endl; // Output: -100
    cout << numberOfPack2 << endl; // Output: 4294967196 (on a 32-bit system)
    cout << numberOfPack3 << endl; // Output: 10000000000

    // there are other data types like it which is for more precise calculations
    // like long double, short int, __int128, __int64, __int32, __int16
    // but they are not used in competitive programming

}