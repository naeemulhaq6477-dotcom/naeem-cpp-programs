// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Multiply two numbers using a function

#include <iostream>   // Include input-output library
using namespace std;  // Use standard namespace

int mulTwo(int x, int y);   // Function declaration: mulTwo takes two integers and returns their product

int main() {
    int a, b, result;   // Declare variables

    cout << "Enter the first number : ";   // Ask user for first number
    cin >> a;   // Store input in a

    cout << "Enter the second number : ";   // Ask user for second number
    cin >> b;   // Store input in b

    result = mulTwo(a, b);   // Call mulTwo function with a and b

    cout << "Product of " << a << " and " << b << " is: " << result << endl;   // Print result
    return 0;   // End program successfully
}

int mulTwo(int x, int y) {   // Function definition
    return (x * y);   // Return the product of x and y
}