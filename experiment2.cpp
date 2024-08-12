// class with name bank name, balance ammount , ac no , 1st function to assing initial value , 2nd funtion to deposit the ammount, 3rd funtiuon to withdraw a ammount 4th function balance check

#include <iostream>
using namespace std;

class Bank
{
private:
    char accountHolderName;
    int accountNumber;
    double balance;
    int minBalance;

public:
    Bank(char name, int accountNo, double initialBalance)
    {
        accountHolderName = name;
        accountNumber = accountNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit Successful. New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        int minBalance = 500;

        if (balance >= amount)
        {
            if ((balance - amount) > minBalance)
            {
                balance -= amount;
                cout << "Withdrawal Successful. New balance: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance." << endl;
            }
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void checkBalance()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    Bank raviAccount('R', 123456789, 1000.0);

    raviAccount.checkBalance();
    //raviAccount.deposit(500);
    raviAccount.withdraw(800);
    raviAccount.checkBalance();
    return 0;
}