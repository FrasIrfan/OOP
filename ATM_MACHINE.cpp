#include <iostream>
using namespace std;

class AtmMachine
{
private:
    int balance;
    int pin;
    int accountNumber;

public:
    AtmMachine()
    {
        balance = 50000;
        pin = 1234;
        accountNumber = 123456789;
    }

    void run()
    {
        int inputPin;
        cout << "Enter your PIN: ";
        cin >> inputPin;

        if (pin == inputPin)
        {
            cout << "PIN is correct" << endl;
            cout << "Account Balance: " << balance;
            displayMenu();
            int option;
            cout << "Enter option:";
            cin >> option;
            switch (option)
            {
            case 1:
                checkBalance();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                exitAtm();
                break;
            default:
                cout << "Invalid option. Try Again After Re-Entering Your ATM Card" << endl;
                break;
            }
        }
        else
        {
            cout << "PIN is incorrect" << endl;
        }
    }

    void displayMenu()
    {
        cout << "\nChoose an option" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Cash" << endl;
        cout << "3. Exit" << endl;
    }

    void checkBalance()
    {
        cout << "Your balance is: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
            withdraw();
        }
        else if (amount < 0)
        {
            cout << "Please Enter Valid Amount" << endl;
            withdraw();
        }
        else
        {
            balance -= amount;
            cout << "Your Amount is Withdrawn Successfully\nNew balance is: " << balance << endl;
        }
    }

    void exitAtm()
    {
        cout << "Thank you for using our ATM" << endl;
    }
};

int main()
{
    AtmMachine atm;
    atm.run();
    return 0;
}
