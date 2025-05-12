#include <iostream>


using namespace std;

int main(){
    int chaiSales[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };
  for (int i = 0; i < 3; i++)
  {
    cout << "Sales for day " << i + 1 << ": \n";
    for (int j = 0; j < 4; j++)
    {
        cout << chaiSales[i][j] << " cups\n"; 
    }
  }
  

    return 0;
}