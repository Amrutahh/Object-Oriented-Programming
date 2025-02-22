/*Write a C++ program to find the sum of individual digits of a positive integer*/
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Ask the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if the entered number is positive
    if (num < 0) {
        cout << "Please enter a positive integer!" << endl;
        return 1;
    }

    // Calculate the sum of digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;         // Remove the last digit
    }

    // Output the sum of digits
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
