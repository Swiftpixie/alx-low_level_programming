#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int day_of_year(int month, int day, int year) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = 0;
    int i;

    if (is_leap_year(year)) {
        days_in_month[2] = 29; /* February has 29 days in a leap year */
    }

    for (i = 1; i < month; i++) {
        day_count += days_in_month[i];
    }
    day_count += day;

    return day_count;
}

void print_remaining_days(int month, int day, int year) {
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (is_leap_year(year)) {
        printf("Day of the year: %d\n", day_of_year(month, day, year));
        printf("Remaining days: %d\n", 366 - day_of_year(month, day, year));
    } else {
        printf("Day of the year: %d\n", day_of_year(month, day, year));
        printf("Remaining days: %d\n", 365 - day_of_year(month, day, year));
    }
}
