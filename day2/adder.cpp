// Problem Statement
// Build a simple calculator that adds two numbers entered by the user.


#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2, sum;

    // Ask the user to input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    cout << "The sum is: " << sum << endl;

    return 0;
}