#include <iostream>
using namespace std;

int main() {

    int accBal = 1000;

    string ans;

    while (ans != "0") {
        cout << "type 0 to open a account: ";
        getline (cin, ans);

        if (ans == "0") {

            cout << "Your account balance is " << accBal << "\n";
            cout << "\n";
            cout << "[1] Withdraw\n";
            cout << "[2] Deposit\n";

            int press;

            cin >> press;

            switch (press) {

                case 1:

                float withdraw;

                cout << "How many do you want to withdraw? ";

                cin >> withdraw;

                if (withdraw <= accBal) {
                    accBal -= withdraw;

                    cout << "Your total balance is: " << accBal << endl;
                } else {
                    cout << "Invalid Balance" << endl;
                }
                break;

                case 2:
                float depo;

                cout << "How many do you want to deposit? ";

                cin >> depo;

                if (depo >= 0) {

                    accBal += depo;

                    cout << "Your total balance is: " << accBal << endl;
                } else if (depo < 0) {
                    cout << "Invalid Balance" << endl;
                }
                break;

                default:
                cout << "Invalid" << endl;
            }
        } else {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}