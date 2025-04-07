//# calculator
#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    result = num1 * num2;

    cout << "The result of multiplication is: " << result << endl;

    return 0;
}
