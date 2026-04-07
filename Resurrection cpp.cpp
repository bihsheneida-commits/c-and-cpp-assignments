#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    // Input this year's Resurrection Sunday
    cout << "Enter this year's Resurrection Sunday (day month year): ";
    cin >> day >> month >> year;

    // Add 1 year
    int nextYear = year + 1;

    cout << "\nNext Resurrection Sunday will be on: "
         << day << "/" << month << "/" << nextYear << endl;

    cout << "Reminder: Prepare to celebrate the Resurrection of Christ!" << endl;

    return 0;
}
