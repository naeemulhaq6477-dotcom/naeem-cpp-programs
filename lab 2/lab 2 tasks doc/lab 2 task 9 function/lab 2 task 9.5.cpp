// Name: Naeem ul haq
// ID: 5122416 / 0665
// Objective: Divide two numbers using a function

#include <iostream>   // Include input-output library
using namespace std;  // Use standard namespace

int divTwo(int x, int y);   // Function declaration: divTwo takes two integers and returns their division

int main() {
    int a, b, result;   // Declare variables

    cout << "Enter the first number : ";   // Ask user for first number
    cin >> a;   // Store input in a

    cout << "Enter the second number : ";   // Ask user for second number
    cin >> b;   // Store input in b

    result = divTwo(a, b);   // Call divTwo function with a and b

    cout << "Division of " << a << " by " << b << " is: " << result << endl;   // Print result
    return 0;   // End program successfully
}

int divTwo(int x, int y) {   // Function definition
    return (x / y);   // Return the division of x by y (integer division)
}
