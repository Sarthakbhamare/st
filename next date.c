#include <stdio.h>


int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}


int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1; // Invalid month
    }
}


void findNextDay(int day, int month, int year) {
    int daysInMonth = getDaysInMonth(month, year);

    if (daysInMonth == -1 || day < 1 || day > daysInMonth) {
        printf("Invalid date entered.\n");
        return;
    }

    if (day < daysInMonth) {
        day++;
    } else {
        day = 1;
        if (month < 12) {
            month++;
        } else {
            month = 1;
            year++;
        }
    }

    printf("The next date is: %02d-%02d-%04d\n", day, month, year);
}


int main() {
    int day, month, year;

    printf("Enter the Date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    findNextDay(day, month, year);

    return 0;
}
