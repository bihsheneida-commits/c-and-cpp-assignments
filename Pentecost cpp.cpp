#include <iostream>
using namespace std;

int main() {
    int easterDay, easterMonth, year;

    // Input Easter date
    cout << "Enter Easter Sunday date (day/month/year): ";
    cin >> easterDay >> easterMonth >> year;

    // Add 49 days to get Pentecost Sunday
    int pentecostDay = easterDay + 49;

    // Start of Pentecost week
    int weekStart = pentecostDay - 6;

    cout << "\nPentecost Sunday: "
         << pentecostDay << "/" << easterMonth << "/" << year << endl;

    cout << "Pentecost Week starts: "
         << weekStart << "/" << easterMonth << "/" << year << endl;

    cout << "\nReminder: Pentecost celebration is coming!" << endl;

    return 0;
}
