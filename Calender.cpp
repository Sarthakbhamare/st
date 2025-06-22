#include <stdio.h>

// Check if leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Get start day using Zeller's Congruence
int getStartDay(int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int q = 1;
    int k = year % 100;
    int j = year / 100;
    int h = (q + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) + 5 * j) % 7;
    return (h + 6) % 7;  // Convert Zeller to 0=Sun, 1=Mon, ...
}

int main() {
    int month, year;

    char *monthNames[] = { "", "January", "February", "March", "April", "May", "June",
                               "July", "August", "September", "October", "November", "December" };

    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30,
                             31, 31, 30, 31, 30, 31 };

    // Input
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Leap year correction
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[2] = 29;
    }

    // Output Header
    printf("\n%s %d\n", monthNames[month], year);
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    int startDay = getStartDay(month, year);

    // Print initial spaces
    for (int i = 0; i < startDay; i++) {
        printf("    ");
    }

    // Print days
    for (int d = 1; d <= daysInMonth[month]; d++) {
        printf("%3d ", d);
        if ((startDay + d) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
