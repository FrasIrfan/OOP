#include <iostream>
using namespace std;
class AtmMachine
{
private:
    int balance;
    int pin;
    int account_number;

public:
    AtmMachine()
    {
        balance = 50000;
        pin = 1234;
        account_number = 123456789;
    }
    void run()
    {
        int inputPin;
        cout << "Enter your pin: ";
        cin >> inputPin;

        if (pin == inputPin)
        {
            cout << "Pin is correct" << endl;
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
                Withdraw();
                break;
            case 3:
                exitAtm();
                break;
            default:
                cout << "Invalid option Try Again After Re Entering Your ATM Card" << endl;
                break;
            }
        }

        else
        {
            cout << "Pin is incorrect" << endl;
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
    void Withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 50000)
        {
            cout << "Insufficient balance" << endl;
            Withdraw();
        }
        else if (amount < 0)
        {
            cout << "Please Enter Valid Amount" << endl;
            Withdraw();
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