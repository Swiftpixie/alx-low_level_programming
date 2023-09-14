#include <stdio.h>
#include "main.h"

// Function to check if a year is a leap year
int is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to calculate the day of the year
int day_of_year(int month, int day, int year) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (is_leap_year(year)) {
        days_in_month[2] = 29; // February has 29 days in a leap year
    }

    int day_count = 0;
    for (int i = 1; i < month; i++) {
        day_count += days_in_month[i];
    }
    day_count += day;

    return day_count;
}

// Function to print remaining days
void print_remaining_days(int month, int day, int year) {
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (year < 1) {
        printf("Invalid year: %04d\n", year);
        return;
    }

    int days_in_year = is_leap_year(year) ? 366 : 365;
    int day_count = day_of_year(month, day, year);
    int remaining_days = days_in_year - day_count;

    if (remaining_days < 0) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    } else {
        printf("Day of the year: %d\n", day_count);
        printf("Remaining days: %d\n", remaining_days);
    }
}
