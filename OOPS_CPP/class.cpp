/*
Write a C++ program to implement a class called Date that encapsulates a calendar date with the following requirements:

✅ Class Design:
The class should have three private data members:

int day

int month

int year

✅ Member Functions:
Constructor:

A default constructor that initializes the date to 01/01/2000.

Set Function (setDate(int d, int m, int y)):

Accepts day, month, and year as arguments.

Validates whether the provided date is correct:

The day must be within the valid range for the given month and year.

February should have 29 days only in a leap year.

The month must be between 1 and 12.

Get Functions:

getDay(): Returns the day.

getMonth(): Returns the month.

getYear(): Returns the year.

Display Function:

displayDate(): Displays the date in the format DD/MM/YYYY.

Leap Year Check:

Internally, the class should handle leap year logic using a helper function.

📥 Input:
The user is prompted to enter a day, month, and year.

📤 Output:
If the date is valid, display it.

If not, show an error message indicating the invalid input.
Example Input/Output:
Enter day, month, and year: 29 2 2020
Valid Date Set Successfully!
Date: 29/2/2020 
*/

#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

    // Helper function to check if a year is a leap year
    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    // Helper function to get the number of days in a month
    int getDaysInMonth(int m, int y) {
        switch (m) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                return 31;
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                return isLeapYear(y) ? 29 : 28;
            default:
                return 0; // Invalid month
        }
    }

public:
    // Constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Setter with validation
    bool setDate(int d, int m, int y) {
        if (m < 1 || m > 12) {
            cout << "Invalid month!" << endl;
            return false;
        }
        int maxDay = getDaysInMonth(m, y);
        if (d < 1 || d > maxDay) {
            cout << "Invalid day!" << endl;
            return false;
        }
        day = d;
        month = m;
        year = y;
        return true;
    }

    // Getters
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

// Main function
int main() {
    Date date;

    int d, m, y;
    cout << "Enter day, month, and year: ";
    cin >> d >> m >> y;

    if (date.setDate(d, m, y)) {
        cout << "Valid Date Set Successfully!" << endl;
        date.displayDate();
    } else {
        cout << "Failed to set date due to invalid input." << endl;
    }

    return 0;
}
