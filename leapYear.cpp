// Copyright 2025 Mikhail Ibrahim
// Date: Apr 6, 2025
// Description: A C++ program that
// determines if a given year is a leap year,
// based on the leap year rules of divisibility
// by 4, 100, and 400, with error handling for invalid input.

#include <iostream>
#include <limits>  // To handle input errors

using std::cin;
using std::cout;
using std::endl;

int main() {
    int year;

    // Ask the user to input a year
    cout << "Enter a year: ";
    cin >> year;

    // Check if the input is invalid
    if (cin.fail()) {
        // Clear the error flag
        cin.clear();
        // Ignore the rest of the invalid input
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // Inform the user of the error
        cout << "Invalid input. Please enter a valid year." << endl;
        return 1;  // Exit the program with an error code
    }

    // Check if the year is divisible by 4
    if (year % 4 == 0) {
        // Check if the year is divisible by 100
        if (year % 100 == 0) {
            // Check if the year is divisible by 400
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
