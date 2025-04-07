//# calculator
#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;

    // Ask for input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Multiply the numbers
    result = num1 * num2;

    // Display the result
    cout << "The result of multiplication is: " << result << endl;

    return 0;
}
