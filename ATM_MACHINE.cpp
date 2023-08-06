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
        cout << "Welcome to ATM" << endl;
        int inputPin;
        cout << "Enter your PIN: ";
        cin >> inputPin;

        if (pin == inputPin)
        {
            cout << "PIN is correct" << endl;
            cout << "Account Balance: " << balance << endl;
            displayMenu();

            int option;
            cout << "Enter option: ";
            cin >> option;

            while (option < 1 || option > 5)
            {
                cout << "Invalid option. Try Again: ";
                cin >> option;
            }

            switch (option)
            {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                changePin();
                break;
            case 5:
                exitAtm();
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
        cout << "2. Deposit Cash" << endl;
        cout << "3. Withdraw Cash" << endl;
        cout << "4. Change PIN" << endl;
        cout << "5. Exit" << endl;
    }

    void checkBalance()
    {
        cout << "Your balance is: " << balance << endl;
    }

    void deposit()
    {
        int depositAmount;
        cout << "Enter value to deposit: ";
        cin >> depositAmount;

        while (depositAmount < 0) // The while loop continues until the user enters a non-negative value (a valid amount). Once a valid amount is provided, the while loop is exited, and the function continues to the next steps.

        {
            cout << "Please Enter Valid Amount: ";
            cin >> depositAmount;
        }

        balance += depositAmount;
        cout << "Your Amount is Deposited Successfully\nNew balance is: " << balance << endl;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        while (amount > balance || amount < 0) //while loop will keep executing as long as either of the following conditions is true:
        {
            if (amount > balance)
            {
                cout << "Insufficient balance. Try Again: ";
            }
            else
            {
                cout << "Please Enter Valid Amount: ";
            }
            cin >> amount;
        }

        balance -= amount;
        cout << "Your Amount is Withdrawn Successfully\nNew balance is: " << balance << endl;
    }

    void changePin()
    {
        int previousPin, newPin;
        cout << "Enter Previous PIN: ";
        cin >> previousPin;

        while (previousPin != pin)
        {
            cout << "PIN is incorrect. Try Again: ";
            cin >> previousPin;
        }

        cout << "Enter new PIN: ";
        cin >> newPin;
        pin = newPin;
        cout << "PIN changed successfully" << endl;
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
