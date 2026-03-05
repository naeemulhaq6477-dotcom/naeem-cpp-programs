 // Name: Naeem ul Haq
 // ID: 512241 / 0665

#include <iostream>
using namespace std;

int main() {
    char op;          // Variable to store operator (+, -, *, /)
    double num1, num2; // Variables to store two numbers

       // Input first number
    cout << "Enter first number: ";
    cin >> num1;

   // Input operator
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Input second number
    cout << "Enter second number: ";
    cin >> num2;

    // Switch statement to perform operation based on operator
    switch(op) {
        case '+':   // Addition
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':   // Subtraction
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':   // Multiplication
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':   // Division
            if(num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        default:    // Invalid operator
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0; // End of program
}