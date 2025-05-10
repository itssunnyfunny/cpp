#include <iostream>


using namespace std;

int main() {

   
  int account;
  int total;

  cout << "inter your account number\n";
  cin >> account;

  cout << "inter your total amount \n";
  cin >> total;

  if (account > 10000 && total >= 1000000)
  {
    cout << "your account is a premium your are in elite class" ;
  }
  else if (account >5000  || total > 100000)
  {
     cout << "your account is a golden your are in middle class";
  }
  else
  {
        cout << "your account is a silver your are in lower class";
  }
  return 0;
  
}

