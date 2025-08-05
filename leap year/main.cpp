#include <iostream>
using namespace std;

int main() {

    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "This year is a leap year" << endl;
    } else {
        cout << "This year is not a leap year" << endl;
    }


    return 0;
}

//divisible - no remainder
// yyyy - div. by 4, but not div. by 100 = leap year
// yyyy - div. by 4, div by 100, div by 400 = leap year