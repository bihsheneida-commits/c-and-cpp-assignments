#include <stdio.h>

int main() {
    int easterDay, easterMonth, year;

    // Input Easter date
    printf("Enter Easter Sunday date (day month year): ");
    scanf("%d %d %d", &easterDay, &easterMonth, &year);

    // Pentecost is 49 days after Easter
    int pentecostDay = easterDay + 49;

    // Pentecost week starts 6 days before Pentecost Sunday
    int weekStart = pentecostDay - 6;

    printf("\nPentecost Sunday: %d/%d/%d\n", pentecostDay, easterMonth, year);
    printf("Pentecost Week starts: %d/%d/%d\n", weekStart, easterMonth, year);

    printf("\nReminder: Pentecost celebration is coming!\n");

    return 0;
}
