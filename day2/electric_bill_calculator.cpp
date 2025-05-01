// Write a simple C++ program that calculates the electricity bill for a household based 
// on the number of units consumed. The program should use variables, perform arithmetic
// and logical operations, and display the output in a readable format.
// Rates-
// 0-100 units   -> 1.50 rupees
// 101-300 units -> 2.00 rupees
// > 300 units   -> 3.00 rupees


#include <iostream>  // For input-output
#include <string>    // For using string data type

using namespace std;

int main() {
    string customerName;
    int units;
    float billAmount;

    // Input customer details
    cout << "Enter customer name: ";
    getline(cin, customerName); // to accept full name with spaces

    cout << "Enter units consumed: ";
    cin >> units;

    // Calculate the bill using if-else and arithmetic operators
    if (units <= 100) {
        billAmount = units * 1.5;
    } else if (units <= 300) {
        billAmount = (100 * 1.5) + ((units - 100) * 2.0);
    } else {
        billAmount = (100 * 1.5) + (200 * 2.0) + ((units - 300) * 3.0);
    }

    // Output the result
    cout << "\nElectricity Bill for " << customerName << endl;
    cout << "---------------------------" << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Amount to be paid(in rupees): " << billAmount << endl;

    return 0;
}
