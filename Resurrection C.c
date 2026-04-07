#include <stdio.h>

int main() {
    int day, month, year;

    // Input this year's Resurrection Sunday
    printf("Enter this year's Resurrection Sunday (day/month/year): ");
    scanf("%d %d %d", &day, &month, &year);

    // Next Resurrection Sunday (simple assumption: same date next year)
    int nextYear = year + 1;

    printf("\nNext Resurrection Sunday will be on: %d/%d/%d\n", day, month, nextYear);

    printf("Reminder: Prepare to celebrate the Resurrection of Christ!\n");

    return 0;
}
