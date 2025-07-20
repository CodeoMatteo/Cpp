#include <iostream>
using namespace std;

int main() {

    double n1, n2, ans;

    char op;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    cout << "Choose a operator (+, -, *, /) ";
    cin >> op;

    switch (op) {
        case '+':
        ans = n1 + n2;
        break;

        case '-':
        ans = n1 - n2;
        break;

        case '*':
        ans = n1 * n2;
        break;

        case '/':
        ans = n1 / n2;
        break;

        default:
        cout << "Invalid Operator" << endl;
    }

    cout << "result: " << ans << endl;

    return 0;
}