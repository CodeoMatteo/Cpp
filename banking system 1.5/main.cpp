#include <iostream>
using namespace std;

void showBalance(double balance);

double deposit();

double withdraw(double balance);

int main() {
    double balance = 0;
    int choices;

    do {
        cout << "**************************" << endl;
        cout << "$$$ BANKING SYSTEM 1.5 $$$" << endl;
        cout << "**************************" << endl;
        cout << "[1] Show Balance" << endl;
        cout << "[2] Deposit" << endl;
        cout << "[3] Withdraw" << endl;
        cout << "[4] Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choices;

        switch (choices) {
            case 1:
            showBalance(balance);
            break;

            case 2:
            balance += deposit();
            showBalance(balance);
            break;

            case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;

            case 4:
            cout << "\n$ THANKS FOR YOUR TRANSACTIONS $\n" << endl;
            break;

            default:
            cout << "\n!!! INVALID CHOICE !!! \n" << endl;
        }
    } while ( choices != 4);
    return 0;
}

void showBalance(double balance) {
    cout << "\nYour balance is: $" << balance << "\n" << endl;
}

double deposit() {

    double amount;

    cout << "Enter a amount: ";
    cin >> amount;

    if (amount > 0) {
        cout << "\n $ DEPOSIT SUCCESSFULLY $\n";
        return amount;
    } else {
        cout << "\n!!! INVALID AMOUNT !!! \n" << endl;
        return 0;
    }
}

double withdraw(double balance) {
    double amount;

    cout << "Enter a amount: ";
    cin >> amount;

    if (amount > balance || amount < 0) {
        cout << "\n!!! INVALID AMOUNT !!!" << endl;
        return 0;
    } else {
        cout << "\n $ WITHDRAWN SUCCESSFULLY $\n";
        return amount;
    }
}
