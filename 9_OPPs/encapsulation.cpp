#include <iostream>
#include <string>
#include <vector>   

using namespace std;
// encapsulation of data and behaviour in a class
// encapsulation means hiding the data and behaviour from the user


class BankAccount
{
    private:
       string accountNumber;
       double balance;
    public:
        
        BankAccount(string accountNumber, double balance)
        {
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
        void deposit(int amount)
        {
            balance += amount;
        }
        void withdraw(int amount)
        {
            if(amount > balance)
            {
                cout << "Insufficient balance" << endl;
                return;
            }
            balance -= amount;
        }
        int getBalance()
        {
            return balance;
        }
};


int main( ){

    BankAccount myAccount("123456", 1000);
    myAccount.deposit(500);
    cout << "Balance: " << myAccount.getBalance() << endl;
    myAccount.withdraw(200);
    cout << "Balance: " << myAccount.getBalance() << endl;
    return 0;
}